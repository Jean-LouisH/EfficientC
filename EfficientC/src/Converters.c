#include "../include/Converters.h"

ecString ecConvertMemU8ToString(ecMemU8 mem)
{
	return ecNewString(mem.data);
}

ecString ecConvertMemS8ToString(ecMemS8 mem)
{
	return ecNewString(mem.data);
}