#ifndef Binary_h
#define Binary_h

#include <stdint.h>

//Unsigned binaries
//////////////////////////////////

typedef struct
{
	uint8_t* data;
	uint64_t size;
}HighC_Binary_u8;

typedef struct
{
	uint16_t* data;
	uint64_t size;
}HighC_Binary_u16;

typedef struct
{
	uint32_t* data;
	uint64_t size;
}HighC_Binary_u32;

typedef struct
{
	uint64_t* data;
	uint64_t size;
}HighC_Binary_u64;

//Signed binaries
//////////////////////////////////

typedef struct
{
	int8_t* data;
	uint64_t size;
}HighC_Binary_s8;

typedef struct
{
	int16_t* data;
	uint64_t size;
}HighC_Binary_s16;

typedef struct
{
	int32_t* data;
	uint64_t size;
}HighC_Binary_s32;

typedef struct
{
	int64_t* data;
	uint64_t size;
}HighC_Binary_s64;

#endif /*Binary_h*/