#include "../include/Converters.h"

ecString ecConvertMemU8ToString(ecMemU8 mem)
{
	return ecNewString(mem.data);
}