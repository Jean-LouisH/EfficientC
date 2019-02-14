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
}hcMemU8;

typedef struct
{
	uint16_t* data;
	uint64_t size;
}hcMemU16;

typedef struct
{
	uint32_t* data;
	uint64_t size;
}hcMemU32;

typedef struct
{
	uint64_t* data;
	uint64_t size;
}hcMemU64;

//Signed
//////////////////////////////////

typedef struct
{
	int8_t* data;
	uint64_t size;
}hcMemS8;

typedef struct
{
	int16_t* data;
	uint64_t size;
}hcMemS16;

typedef struct
{
	int32_t* data;
	uint64_t size;
}hcMemS32;

typedef struct
{
	int64_t* data;
	uint64_t size;
}hcMemS64;

hcMemU8 hcAllocMemU8(uint64_t capacity);
hcMemU16 hcAllocMemU16(uint64_t capacity);
hcMemU32 hcAllocMemU32(uint64_t capacity);
hcMemU64 hcAllocMemU64(uint64_t capacity);
hcMemS8 hcAllocMemS8(uint64_t capacity);
hcMemS16 hcAllocMemS16(uint64_t capacity);
hcMemS32 hcAllocMemS32(uint64_t capacity);
hcMemS64 hcAllocMemS64(uint64_t capacity);
hcMemU8 hcAllocUninitMemU8(uint64_t capacity);
hcMemU16 hcAllocUninitMemU16(uint64_t capacity);
hcMemU32 hcAllocUninitMemU32(uint64_t capacity);
hcMemU64 hcAllocUninitMemU64(uint64_t capacity);
hcMemS8 hcAllocUninitMemS8(uint64_t capacity);
hcMemS16 hcAllocUninitMemS16(uint64_t capacity);
hcMemS32 hcAllocUninitMemS32(uint64_t capacity);
hcMemS64 hcAllocUninitMemS64(uint64_t capacity);

void hcFreeMemU8(hcMemU8* mem);
void hcFreeMemU16(hcMemU16* mem);
void hcFreeMemU32(hcMemU32* mem);
void hcFreeMemU64(hcMemU64* mem);
void hcFreeMemS8(hcMemS8* mem);
void hcFreeMemS16(hcMemS16* mem);
void hcFreeMemS32(hcMemS32* mem);
void hcFreeMemS64(hcMemS64* mem);

#ifdef __cplusplus
}
#endif

#endif /*Memory_h*/