#include "mem/memory.h"
#include "utils/difftest.h"
#include "common.h"
#include "main.h"
#include "Vtop__Dpi.h"     
#include <fcntl.h>
#include <chrono>

uint8_t memory[MEMORY_SIZE];

FILE *mtrace_file= fopen(TRACE_DIR "trace_mtrace.txt","a");
#define LOG_TRACE_READ(addr ,len, data)  fprintf(mtrace_file,  "TRACE:Read  %d bytes from 0x%x, data = 0x%x\n", len, addr, data)
#define LOG_TRACE_WRITE(addr, len, data) fprintf(mtrace_file, "TRACE:Write %d bytes to   0x%x, data = 0x%x\n", len, addr, data)

#define DEVICE_BASE     0xa0000000                                                                                                                                                                                                     
#define MMIO_BASE       0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR_low    (DEVICE_BASE + 0x0000048)
#define RTC_ADDR_high   (DEVICE_BASE + 0x000004c)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

void close_mtracelog_file(){
  if(mtrace_file != NULL){
    fclose(mtrace_file);
  }
}

uint8_t* guest_to_host(uint32_t paddr) { return memory + paddr - CONFIG_MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - memory + CONFIG_MBASE; }

uint32_t vaddr_ifetch(uint32_t addr, int len) {
  return pmem_read(addr, len);
}

uint32_t vaddr_read(uint32_t addr, int len) {
  return pmem_read(addr, len);
}

void vaddr_write(uint32_t addr, int len, uint32_t data) {
  pmem_write(addr, data,len );
}                

static const auto startup_time = std::chrono::steady_clock::now();

uint64_t get_uptime_us() {
    auto now = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(now - startup_time);
    return duration.count();
}

uint32_t mmio_read(uint32_t addr_in, int size) {
		uint32_t addr = addr_in & ~0x3u;

    switch (addr) {
				case RTC_ADDR_low :
				case RTC_ADDR_high: {
				    uint64_t microseconds = get_uptime_us();
				    if (addr == RTC_ADDR_low) {
				        return microseconds & 0xFFFFFFFF;  // 低32位
				    } else {
				        return (microseconds >> 32) & 0xFFFFFFFF;  // 高32位
				    }
				}
        default:
            std::cerr << "Error: Unknown device address 0x read" << std::hex << addr << std::endl;
            return 0;
    }
}

void mmio_write(uint32_t addr_in, uint32_t data, int size) {
		uint32_t addr = addr_in & ~0x3u;
    switch (addr) {
        case SERIAL_PORT:
            if (size == 1) {
								putc(data & 0xFF, stderr);
            }
//            LOG_TRACE_READ(addr, size, data);
            break;
            
        default:
            std::cerr << "Error: Unknown device address 0x write" << std::hex << addr << std::endl;
    }
}

uint32_t pmem_read(uint32_t addr, int size) {

		if( addr >= DEVICE_BASE ) {
				difftest_skip_ref();
				return mmio_read(addr, size);
		}

    if ((size == 2 && addr % 2 != 0) || (size == 4 && addr % 4 != 0)) {
        std::cerr << "Error: Read Address is not " << size << "-byte aligned" << std::endl;
        return 0;
    }

    size_t offset = (addr - 0x80000000);

    if (offset + size > sizeof(memory)) {
        return 0;
    }

    switch (size) {
        case 1:{
						uint32_t data1 = static_cast<uint32_t>(*reinterpret_cast<uint8_t*>(&memory[offset]));
//						LOG_TRACE_READ(addr ,size, data1);
            return data1;
				}
        case 2:{
            uint32_t data2 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&memory[offset]));
//						LOG_TRACE_READ(addr ,size, data2);
						return data2;
				}
        case 4:{
            uint32_t data4 = static_cast<uint32_t>(*reinterpret_cast<uint32_t*>(&memory[offset]));
//						LOG_TRACE_READ(addr ,size, data4);
						return data4;
				}
        default:
            std::cerr << "Error: Invalid size " << size << " (must be 1, 2, or 4)" << std::endl;
            return 0;
    }
}


void pmem_write(uint32_t addr, uint32_t data, int size) {
		if (addr >= DEVICE_BASE) {
			 difftest_skip_ref();
			 mmio_write(addr, data, size);		
			 return;
		}

    if ((size == 2 && addr % 2 != 0) || (size == 4 && addr % 4 != 0)) {
        std::cerr << "Error: Write Address is not " << size << "-byte aligned" << std::endl;
        return;
    }

    size_t offset = (addr - 0x80000000);
    
		if (offset + size > sizeof(memory)) {
        return;
    }

    switch (size) {
        case 1:{
						uint8_t data1 = static_cast<uint8_t>(data);
//						LOG_TRACE_WRITE(addr, size, data1);
            *reinterpret_cast<uint8_t*>(&memory[offset]) = data1;
            break;
				}
        case 2:{
						uint16_t data2 = static_cast<uint16_t>(data);
//						LOG_TRACE_WRITE(addr, size, data2);
            *reinterpret_cast<uint16_t*>(&memory[offset]) = data2;
            break;
				}
        case 4:{
						uint32_t data4 = static_cast<uint32_t>(data);
//						LOG_TRACE_WRITE(addr, size, data4);
            *reinterpret_cast<uint32_t*>(&memory[offset]) = data4;
            break;
				}
        default:
            std::cerr << "Error: Invalid size " << size << " (must be 1, 2, or 4)" << std::endl;
            return;
    }
}

bool loadFileToMemory(const std::string& path, uint8_t* mem, size_t size) {
    std::ifstream file(path, std::ios::binary);   
    if (!file) {
        std::cerr << "无法打开文件: " << path << std::endl;
        return false;
    }
    file.read(reinterpret_cast<char*>(mem), size);
    return true;
}



void init_mem() {
  memset(memory, rand(), MEMORY_SIZE);
}

