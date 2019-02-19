#include "../include/DataStructures/Memory.h"
#include <stdlib.h>

ecMemU8 ecAllocMemU8(uint64_t capacity)
{
	ecMemU8 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint8_t), mem.size); 
	return mem;
}

ecMemU16 ecAllocMemU16(uint64_t capacity)
{
	ecMemU16 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint16_t), mem.size);
	return mem;
}

ecMemU32 ecAllocMemU32(uint64_t capacity)
{
	ecMemU32 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint32_t), mem.size);
	return mem;
}

ecMemU64 ecAllocMemU64(uint64_t capacity)
{
	ecMemU64 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint64_t), mem.size);
	return mem;
}

ecMemU8 ecAllocUninitMemU8(uint64_t capacity)
{
	ecMemU8 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint8_t) * mem.size);
	return mem;
}

ecMemU16 ecAllocUninitMemU16(uint64_t capacity)
{
	ecMemU16 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint16_t) * mem.size);
	return mem;
}

ecMemU32 ecAllocUninitMemU32(uint64_t capacity)
{
	ecMemU32 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint32_t) * mem.size);
	return mem;
}

ecMemU64 ecAllocUninitMemU64(uint64_t capacity)
{
	ecMemU64 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint64_t) * mem.size);
	return mem;
}

void ecFreeMemU8(ecMemU8* mem)
{
	free(mem->data);
	mem->size = 0;
}

void ecFreeMemU16(ecMemU16* mem)
{
	free(mem->data);
	mem->size = 0;
}

void ecFreeMemU32(ecMemU32* mem)
{
	free(mem->data);
	mem->size = 0;
}

void ecFreeMemU64(ecMemU64* mem)
{
	free(mem->data);
	mem->size = 0;
}