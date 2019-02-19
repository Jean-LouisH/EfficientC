#ifndef Memory_h
#define Memory_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

typedef struct
{
	uint8_t* data;
	uint64_t size;
}ecMemU8;

typedef struct
{
	uint16_t* data;
	uint64_t size;
}ecMemU16;

typedef struct
{
	uint32_t* data;
	uint64_t size;
}ecMemU32;

typedef struct
{
	uint64_t* data;
	uint64_t size;
}ecMemU64;

ecMemU8 ecAllocMemU8(uint64_t capacity);
ecMemU16 ecAllocMemU16(uint64_t capacity);
ecMemU32 ecAllocMemU32(uint64_t capacity);
ecMemU64 ecAllocMemU64(uint64_t capacity);

ecMemU8 ecAllocUninitMemU8(uint64_t capacity);
ecMemU16 ecAllocUninitMemU16(uint64_t capacity);
ecMemU32 ecAllocUninitMemU32(uint64_t capacity);
ecMemU64 ecAllocUninitMemU64(uint64_t capacity);

void ecFreeMemU8(ecMemU8* mem);
void ecFreeMemU16(ecMemU16* mem);
void ecFreeMemU32(ecMemU32* mem);
void ecFreeMemU64(ecMemU64* mem);

#ifdef __cplusplus
}
#endif

#endif /*Memory_h*/