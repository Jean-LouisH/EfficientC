#ifndef Memory_h
#define Memory_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

//Unsigned
//////////////////////////////////

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

//Signed
//////////////////////////////////

typedef struct
{
	int8_t* data;
	uint64_t size;
}ecMemS8;

typedef struct
{
	int16_t* data;
	uint64_t size;
}ecMemS16;

typedef struct
{
	int32_t* data;
	uint64_t size;
}ecMemS32;

typedef struct
{
	int64_t* data;
	uint64_t size;
}ecMemS64;

ecMemU8 ecAllocMemU8(uint64_t capacity);
ecMemU16 ecAllocMemU16(uint64_t capacity);
ecMemU32 ecAllocMemU32(uint64_t capacity);
ecMemU64 ecAllocMemU64(uint64_t capacity);
ecMemS8 ecAllocMemS8(uint64_t capacity);
ecMemS16 ecAllocMemS16(uint64_t capacity);
ecMemS32 ecAllocMemS32(uint64_t capacity);
ecMemS64 ecAllocMemS64(uint64_t capacity);
ecMemU8 ecAllocUninitMemU8(uint64_t capacity);
ecMemU16 ecAllocUninitMemU16(uint64_t capacity);
ecMemU32 ecAllocUninitMemU32(uint64_t capacity);
ecMemU64 ecAllocUninitMemU64(uint64_t capacity);
ecMemS8 ecAllocUninitMemS8(uint64_t capacity);
ecMemS16 ecAllocUninitMemS16(uint64_t capacity);
ecMemS32 ecAllocUninitMemS32(uint64_t capacity);
ecMemS64 ecAllocUninitMemS64(uint64_t capacity);

void ecFreeMemU8(ecMemU8* mem);
void ecFreeMemU16(ecMemU16* mem);
void ecFreeMemU32(ecMemU32* mem);
void ecFreeMemU64(ecMemU64* mem);
void ecFreeMemS8(ecMemS8* mem);
void ecFreeMemS16(ecMemS16* mem);
void ecFreeMemS32(ecMemS32* mem);
void ecFreeMemS64(ecMemS64* mem);

#ifdef __cplusplus
}
#endif

#endif /*Memory_h*/