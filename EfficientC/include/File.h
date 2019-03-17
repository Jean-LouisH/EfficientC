#ifndef File_h
#define File_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include "DataStructures/Memory.h"
#include "DataStructures/Streams.h"
#include "DataStructures/Strings.h"

bool ecFileExists(const char* filepath);
ecString ecExtractFileName(const char* filepath);
ecString ecExtractFileExtension(const char* filepath);
ecString ecReadASCIIStringFromFile(const char* filepath);

ecMemU8 ecReadMemU8FromFile(const char* filepath);
ecMemU16 ecReadMemU16FromFile(const char* filepath);
ecMemU32 ecReadMemU32FromFile(const char* filepath);
ecMemU64 ecReadMemU64FromFile(const char* filepath);

ecStreamU8 ecNewStreamU8FromFile(const char* filepath);
ecStreamU16 ecNewStreamU16FromFile(const char* filepath);
ecStreamU32 ecNewStreamU32FromFile(const char* filepath);
ecStreamU64 ecNewStreamU64FromFile(const char* filepath);

void ecWriteMemU8ToFile(ecMemU8* mem, const char* filepath);
void ecWriteMemU16ToFile(ecMemU16* mem, const char* filepath);
void ecWriteMemU32ToFile(ecMemU32* mem, const char* filepath);
void ecWriteMemU64ToFile(ecMemU64* mem, const char* filepath);

void ecAppendMemU8ToFile(ecMemU8* mem, const char* filepath);
void ecAppendMemU16ToFile(ecMemU16* mem, const char* filepath);
void ecAppendMemU32ToFile(ecMemU32* mem, const char* filepath);
void ecAppendMemU64ToFile(ecMemU64* mem, const char* filepath);

#ifdef __cplusplus
}
#endif

#endif /*File_h*/