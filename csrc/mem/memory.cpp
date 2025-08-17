#include "mem/memory.h"
#include "common.h"
#include "Vtop__Dpi.h"     

uint8_t memory[MEMORY_SIZE];

int32_t pmem_read(int32_t addr, int size) {
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
        case 1:
            return static_cast<int32_t>(*reinterpret_cast<uint8_t*>(&memory[offset]));
        case 2:
            return static_cast<int32_t>(*reinterpret_cast<uint16_t*>(&memory[offset]));
        case 4:
            return static_cast<int32_t>(*reinterpret_cast<uint32_t*>(&memory[offset]));
        default:
            std::cerr << "Error: Invalid size " << size << " (must be 1, 2, or 4)" << std::endl;
            return 0;
    }
}


void pmem_write(int32_t addr, int32_t data, int size) {
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
        case 1:
            *reinterpret_cast<uint8_t*>(&memory[offset]) = static_cast<uint8_t>(data);
            break;
        case 2:
            *reinterpret_cast<uint16_t*>(&memory[offset]) = static_cast<uint16_t>(data);
            break;
        case 4:
            *reinterpret_cast<uint32_t*>(&memory[offset]) = static_cast<uint32_t>(data);
            break;
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
