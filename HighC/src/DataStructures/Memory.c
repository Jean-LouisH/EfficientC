#include "../include/DataStructures/Memory.h"
#include <stdlib.h>

//Allocations of clear memory

hcMemU8 hcAllocMemU8(uint64_t capacity)
{
	hcMemU8 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint8_t), mem.size); 
	return mem;
}

hcMemU16 hcAllocMemU16(uint64_t capacity)
{
	hcMemU16 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint16_t), mem.size);
	return mem;
}

hcMemU32 hcAllocMemU32(uint64_t capacity)
{
	hcMemU32 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint32_t), mem.size);
	return mem;
}

hcMemU64 hcAllocMemU64(uint64_t capacity)
{
	hcMemU64 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(uint64_t), mem.size);
	return mem;
}

hcMemS8 hcAllocMemS8(uint64_t capacity)
{
	hcMemS8 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int8_t), mem.size);
	return mem;
}

hcMemS16 hcAllocMemS16(uint64_t capacity)
{
	hcMemS16 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int16_t), mem.size);
	return mem;
}

hcMemS32 hcAllocMemS32(uint64_t capacity)
{
	hcMemS32 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int32_t), mem.size);
	return mem;
}

hcMemS64 hcAllocMemS64(uint64_t capacity)
{
	hcMemS64 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int64_t), mem.size);
	return mem;
}

//Allocation of uninitialized memory

hcMemU8 hcAllocUninitMemU8(uint64_t capacity)
{
	hcMemU8 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint8_t) * mem.size);
	return mem;
}

hcMemU16 hcAllocUninitMemU16(uint64_t capacity)
{
	hcMemU16 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint16_t) * mem.size);
	return mem;
}

hcMemU32 hcAllocUninitMemU32(uint64_t capacity)
{
	hcMemU32 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint32_t) * mem.size);
	return mem;
}

hcMemU64 hcAllocUninitMemU64(uint64_t capacity)
{
	hcMemU64 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(uint64_t) * mem.size);
	return mem;
}

hcMemS8 hcAllocUninitMemS8(uint64_t capacity)
{
	hcMemS8 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int8_t) * mem.size);
	return mem;
}

hcMemS16 hcAllocUninitMemS16(uint64_t capacity)
{
	hcMemS16 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int16_t) * mem.size);
	return mem;
}

hcMemS32 hcAllocUninitMemS32(uint64_t capacity)
{
	hcMemS32 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int32_t) * mem.size);
	return mem;
}

hcMemS64 hcAllocUninitMemS64(uint64_t capacity)
{
	hcMemS64 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int64_t) * mem.size);
	return mem;
}

//Free memory

void hcFreeMemU8(hcMemU8* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemU16(hcMemU16* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemU32(hcMemU32* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemU64(hcMemU64* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemS8(hcMemS8* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemS16(hcMemS16* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemS32(hcMemS32* mem)
{
	free(mem->data);
	mem->size = 0;
}

void hcFreeMemS64(hcMemS64* mem)
{
	free(mem->data);
	mem->size = 0;
}