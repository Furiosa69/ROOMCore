#include "mem/memory.h"
#include "common.h"
#include "Vtop__Dpi.h"     
#include <fcntl.h>

uint8_t memory[MEMORY_SIZE];

FILE *mtrace_file= fopen(TRACE_DIR "trace_mtrace.txt","a");
#define LOG_TRACE_READ(addr ,len, data)  fprintf(mtrace_file,  "TRACE:Read  %d bytes from 0x%x, data = 0x%x\n", len, addr, data)
#define LOG_TRACE_WRITE(addr, len, data) fprintf(mtrace_file, "TRACE:Write %d bytes to   0x%x, data = 0x%x\n", len, addr, data)

uint32_t vaddr_ifetch(uint32_t addr, int len) {
  return pmem_read(addr, len);
}

uint32_t vaddr_read(uint32_t addr, int len) {
  return pmem_read(addr, len);
}

void vaddr_write(uint32_t addr, int len, uint32_t data) {
  pmem_write(addr, data,len );
}                

uint32_t pmem_read(uint32_t addr, int size) {
    if ((size == 2 && addr % 2 != 0) || (size == 4 && addr % 4 != 0)) {
        std::cerr << "Error: Read Address is not " << size << "-byte aligned" << std::endl;
        return 0;
    }

    size_t offset = (addr - 0x80000000);

    if (offset + size > sizeof(memory)) {
//        std::cerr << "Error: Address 0x" << std::hex << addr
//                  << " out of range "
//          			  << std::endl;
        return 0;
    }

    switch (size) {
        case 1:{
						uint32_t data1 = static_cast<uint32_t>(*reinterpret_cast<uint8_t*>(&memory[offset]));
						LOG_TRACE_READ(addr ,size, data1);
            return data1;
				}
        case 2:{
            uint32_t data2 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&memory[offset]));
						LOG_TRACE_READ(addr ,size, data2);
						return data2;
				}
        case 4:{
            uint32_t data4 = static_cast<uint32_t>(*reinterpret_cast<uint32_t*>(&memory[offset]));
						LOG_TRACE_READ(addr ,size, data4);
						return data4;
				}
        default:
            std::cerr << "Error: Invalid size " << size << " (must be 1, 2, or 4)" << std::endl;
            return 0;
    }
}


void pmem_write(uint32_t addr, uint32_t data, int size) {
    if ((size == 2 && addr % 2 != 0) || (size == 4 && addr % 4 != 0)) {
        std::cerr << "Error: Write Address is not " << size << "-byte aligned" << std::endl;
        return;
    }

    size_t offset = (addr - 0x80000000);
    
		if (offset + size > sizeof(memory)) {
//        std::cerr << "Error: Address 0x" << std::hex << addr
//                  << " out of range "
//                  << std::endl;
        return;
    }

    switch (size) {
        case 1:{
						uint8_t data1 = static_cast<uint8_t>(data);
						LOG_TRACE_WRITE(addr, size, data1);
            *reinterpret_cast<uint8_t*>(&memory[offset]) = data1;
            break;
				}
        case 2:{
						uint16_t data2 = static_cast<uint16_t>(data);
						LOG_TRACE_WRITE(addr, size, data2);
            *reinterpret_cast<uint16_t*>(&memory[offset]) = data2;
            break;
				}
        case 4:{
						uint32_t data4 = static_cast<uint32_t>(data);
						LOG_TRACE_WRITE(addr, size, data4);
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

void close_mtracelog_file(){
  if(mtrace_file != NULL){
    fclose(mtrace_file);
  }
}


