#ifndef Memory_h
#define Memory_h

#include <stdint.h>

//Unsigned
//////////////////////////////////

#ifdef __cplusplus
extern "C"
{
#endif

	typedef struct
	{
		uint8_t* data;
		uint64_t size;
	}hcMemoryU8;

	typedef struct
	{
		uint16_t* data;
		uint64_t size;
	}hcMemoryU16;

	typedef struct
	{
		uint32_t* data;
		uint64_t size;
	}hcMemoryU32;

	typedef struct
	{
		uint64_t* data;
		uint64_t size;
	}hcMemoryU64;

	//Signed
	//////////////////////////////////

	typedef struct
	{
		int8_t* data;
		uint64_t size;
	}hcMemoryS8;

	typedef struct
	{
		int16_t* data;
		uint64_t size;
	}hcMemoryS16;

	typedef struct
	{
		int32_t* data;
		uint64_t size;
	}hcMemoryS32;

	typedef struct
	{
		int64_t* data;
		uint64_t size;
	}hcMemoryS64;

	void hcFreeMemoryU8(hcMemoryU8* memory);
	void hcFreeMemoryU16(hcMemoryU16* memory);
	void hcFreeMemoryU32(hcMemoryU32* memory);
	void hcFreeMemoryU64(hcMemoryU64* memory);

	void hcFreeMemoryS8(hcMemoryS8* memory);
	void hcFreeMemoryS16(hcMemoryS16* memory);
	void hcFreeMemoryS32(hcMemoryS32* memory);
	void hcFreeMemoryS64(hcMemoryS64* memory);

#ifdef __cplusplus
}
#endif

#endif /*Memory_h*/