#ifndef Types_h
#define Types_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

typedef uint8_t nat8;
typedef uint16_t nat16;
typedef uint32_t nat32;
typedef uint64_t nat64;
typedef nat32 nat;

typedef nat8 uint8;
typedef nat16 uint16;
typedef nat32 uint32;
typedef nat64 uint64;
typedef nat32 uint;

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

typedef char ascii;

typedef float float32;
typedef double float64;

#ifdef __cplusplus
}
#endif

#endif /*Types_h*/