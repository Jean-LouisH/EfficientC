#ifndef Converters_h
#define Converters_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include "DataStructures/Memory.h""
#include "DataStructures/Strings.h"

	hcString hcConvertMemoryU8ToString(hcMemoryU8 memory);
	hcString hcConvertMemoryS8ToString(hcMemoryS8 memory);

#ifdef __cplusplus
}
#endif

#endif /*Converters_h*/