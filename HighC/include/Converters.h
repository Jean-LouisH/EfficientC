#ifndef Converters_h
#define Converters_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include "DataStructures/Memory.h"
#include "DataStructures/Strings.h"

hcString hcConvertMemU8ToString(hcMemU8 mem);
hcString hcConvertMemS8ToString(hcMemS8 mem);

#ifdef __cplusplus
}
#endif

#endif /*Converters_h*/