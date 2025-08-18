#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <fstream>

#define MEMORY_SIZE (1024 * 1024)
extern uint8_t memory[MEMORY_SIZE];

uint32_t vaddr_ifetch(uint32_t addr ,int len);
uint32_t vaddr_read(uint32_t addr , int len);
void vaddr_write(uint32_t addr, int len, uint32_t data);

extern "C" uint32_t pmem_read(uint32_t addr, int size);
extern "C" void pmem_write(uint32_t addr, uint32_t data, int size);

bool loadFileToMemory(const std::string& path, uint8_t* mem, size_t size);

#endif
