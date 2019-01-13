#include "../include/Converters.h"

hcString hcConvertMemoryU8ToString(hcMemoryU8 memory)
{
	return hcNewString(memory.data);
}

hcString hcConvertMemoryS8ToString(hcMemoryS8 memory)
{
	return hcNewString(memory.data);
}