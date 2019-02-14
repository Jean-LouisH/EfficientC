#include "../include/Converters.h"

hcString hcConvertMemU8ToString(hcMemU8 mem)
{
	return hcNewString(mem.data);
}

hcString hcConvertMemS8ToString(hcMemS8 mem)
{
	return hcNewString(mem.data);
}