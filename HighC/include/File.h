#ifndef File_h
#define File_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include "DataStructures/Memory.h"
#include "DataStructures/Strings.h"

bool hcFileExists(const char* filepath);
hcString hcExtractFileName(const char* filepath);
hcString hcExtractFileExtension(const char* filepath);
hcString hcReadASCIIStringFromFile(const char* filepath);

hcMemU8 hcReadMemU8FromFile(const char* filepath);
hcMemU16 hcReadMemU16FromFile(const char* filepath);
hcMemU32 hcReadMemU32FromFile(const char* filepath);
hcMemU64 hcReadMemU64FromFile(const char* filepath);
hcMemS8 hcReadMemS8FromFile(const char* filepath);
hcMemS16 hcReadMemS16FromFile(const char* filepath);
hcMemS32 hcReadMemS32FromFile(const char* filepath);
hcMemS64 hcReadMemS64FromFile(const char* filepath);

void hcWriteMemU8ToFile(hcMemU8* mem, const char* filepath);
void hcWriteMemU16ToFile(hcMemU16* mem, const char* filepath);
void hcWriteMemU32ToFile(hcMemU32* mem, const char* filepath);
void hcWriteMemU64ToFile(hcMemU64* mem, const char* filepath);
void hcWriteMemS8ToFile(hcMemS8* mem, const char* filepath);
void hcWriteMemS16ToFile(hcMemS16* mem, const char* filepath);
void hcWriteMemS32ToFile(hcMemS32* mem, const char* filepath);
void hcWriteMemS64ToFile(hcMemS64* mem, const char* filepath);

void hcAppendMemU8ToFile(hcMemU8* mem, const char* filepath);
void hcAppendMemU16ToFile(hcMemU16* mem, const char* filepath);
void hcAppendMemU32ToFile(hcMemU32* mem, const char* filepath);
void hcAppendMemU64ToFile(hcMemU64* mem, const char* filepath);
void hcAppendMemS8ToFile(hcMemS8* mem, const char* filepath);
void hcAppendMemS16ToFile(hcMemS16* mem, const char* filepath);
void hcAppendMemS32ToFile(hcMemS32* mem, const char* filepath);
void hcAppendMemS64ToFile(hcMemS64* mem, const char* filepath);

#ifdef __cplusplus
}
#endif

#endif /*File_h*/