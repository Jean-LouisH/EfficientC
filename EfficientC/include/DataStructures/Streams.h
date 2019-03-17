#ifndef Streams_h
#define Streams_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdio.h>

typedef struct
{
	uint8_t* base;
	uint8_t* buffer;
	uint64_t size;
	uint64_t progress;
	uint64_t end;
	FILE* file;
}ecStreamU8;

typedef struct
{
	uint16_t* base;
	uint16_t* buffer;
	uint64_t size;
	uint64_t progress;
	uint64_t end;
	FILE* file;
}ecStreamU16;

typedef struct
{
	uint32_t* base;
	uint32_t* buffer;
	uint64_t size;
	uint64_t progress;
	uint64_t end;
	FILE* file;
}ecStreamU32;

typedef struct
{
	uint64_t* base;
	uint64_t* buffer;
	uint64_t size;
	uint64_t progress;
	uint64_t end;
	FILE* file;
}ecStreamU64;

#ifdef __cplusplus
}
#endif

#endif /*Streams_h*/