#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <fstream>

#define MEMORY_SIZE (1024 * 1024)
extern uint8_t memory[MEMORY_SIZE];

extern "C" int32_t pmem_read(int32_t addr, int size);
extern "C" void pmem_write(int32_t addr, int32_t data, int size);

bool loadFileToMemory(const std::string& path, uint8_t* mem, size_t size);

#endif
