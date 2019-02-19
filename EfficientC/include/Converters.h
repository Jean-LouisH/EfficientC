#ifndef Converters_h
#define Converters_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include "DataStructures/Memory.h"
#include "DataStructures/Strings.h"

ecString ecConvertMemU8ToString(ecMemU8 mem);

#ifdef __cplusplus
}
#endif

#endif /*Converters_h*/