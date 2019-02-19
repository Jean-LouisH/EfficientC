#include "../include/Endianess.h"

uint16_t ecSwap16Bits(uint16_t data)
{
	return ((data >> 8) & 0x00FF) | ((data << 8) & 0xFF00);
}

uint32_t ecSwap32Bits(uint32_t data)
{
	return (((data >> 24) & 0x000000FF) | ((data >> 8) & 0x0000FF00) |
			((data << 8) & 0x00FF0000) | ((data << 24) & 0xFF000000));
}

uint64_t ecSwap64Bits(uint64_t data)
{
	return (((data >> 56) & 0x00000000000000FF) | ((data >> 40) & 0x000000000000FF00) |
			((data << 24) & 0x0000000000FF0000) | ((data << 8) & 0x000000000FF00000) |
			((data >> 8) & 0x0000000FF0000000) | ((data >> 24) & 0x00000FF000000000) |
			((data << 40) & 0x00FF000000000000) | ((data << 56) & 0xFF00000000000000));
}