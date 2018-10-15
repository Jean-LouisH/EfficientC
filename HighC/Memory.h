#ifndef Memory_h
#define Memory_h

#include <stdint.h>

//Unsigned
//////////////////////////////////

typedef struct
{
	uint8_t* data;
	uint64_t size;
}HighC_Memory_u8;

typedef struct
{
	uint16_t* data;
	uint64_t size;
}HighC_Memory_u16;

typedef struct
{
	uint32_t* data;
	uint64_t size;
}HighC_Memory_u32;

typedef struct
{
	uint64_t* data;
	uint64_t size;
}HighC_Memory_u64;

//Signed
//////////////////////////////////

typedef struct
{
	int8_t* data;
	uint64_t size;
}HighC_Memory_s8;

typedef struct
{
	int16_t* data;
	uint64_t size;
}HighC_Memory_s16;

typedef struct
{
	int32_t* data;
	uint64_t size;
}HighC_Memory_s32;

typedef struct
{
	int64_t* data;
	uint64_t size;
}HighC_Memory_s64;

#endif /*Memory_h*/