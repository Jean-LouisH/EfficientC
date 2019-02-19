#ifndef Endianess_h
#define Endianess_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>

uint16_t ecSwap16Bits(uint16_t data);
uint32_t ecSwap32Bits(uint32_t data);
uint64_t ecSwap64Bits(uint64_t data);

#ifdef __cplusplus
}
#endif

#endif /*Endianess_h*/