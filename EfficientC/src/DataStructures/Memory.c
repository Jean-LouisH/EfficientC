#include "../include/DataStructures/Memory.h"
#include <stdlib.h>

//Allocations of clear memory

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

ecMemS8 ecAllocMemS8(uint64_t capacity)
{
	ecMemS8 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int8_t), mem.size);
	return mem;
}

ecMemS16 ecAllocMemS16(uint64_t capacity)
{
	ecMemS16 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int16_t), mem.size);
	return mem;
}

ecMemS32 ecAllocMemS32(uint64_t capacity)
{
	ecMemS32 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int32_t), mem.size);
	return mem;
}

ecMemS64 ecAllocMemS64(uint64_t capacity)
{
	ecMemS64 mem;
	mem.size = capacity;
	mem.data = calloc(sizeof(int64_t), mem.size);
	return mem;
}

//Allocation of uninitialized memory

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

ecMemS8 ecAllocUninitMemS8(uint64_t capacity)
{
	ecMemS8 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int8_t) * mem.size);
	return mem;
}

ecMemS16 ecAllocUninitMemS16(uint64_t capacity)
{
	ecMemS16 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int16_t) * mem.size);
	return mem;
}

ecMemS32 ecAllocUninitMemS32(uint64_t capacity)
{
	ecMemS32 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int32_t) * mem.size);
	return mem;
}

ecMemS64 ecAllocUninitMemS64(uint64_t capacity)
{
	ecMemS64 mem;
	mem.size = capacity;
	mem.data = malloc(sizeof(int64_t) * mem.size);
	return mem;
}

//Free memory

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

void ecFreeMemS8(ecMemS8* mem)
{
	free(mem->data);
	mem->size = 0;
}

void ecFreeMemS16(ecMemS16* mem)
{
	free(mem->data);
	mem->size = 0;
}

void ecFreeMemS32(ecMemS32* mem)
{
	free(mem->data);
	mem->size = 0;
}

void ecFreeMemS64(ecMemS64* mem)
{
	free(mem->data);
	mem->size = 0;
}