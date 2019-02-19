#ifndef File_h
#define File_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include "DataStructures/Memory.h"
#include "DataStructures/Strings.h"

bool ecFileExists(const char* filepath);
ecString ecExtractFileName(const char* filepath);
ecString ecExtractFileExtension(const char* filepath);
ecString ecReadASCIIStringFromFile(const char* filepath);

ecMemU8 ecReadMemU8FromFile(const char* filepath);
ecMemU16 ecReadMemU16FromFile(const char* filepath);
ecMemU32 ecReadMemU32FromFile(const char* filepath);
ecMemU64 ecReadMemU64FromFile(const char* filepath);
ecMemS8 ecReadMemS8FromFile(const char* filepath);
ecMemS16 ecReadMemS16FromFile(const char* filepath);
ecMemS32 ecReadMemS32FromFile(const char* filepath);
ecMemS64 ecReadMemS64FromFile(const char* filepath);

void ecWriteMemU8ToFile(ecMemU8* mem, const char* filepath);
void ecWriteMemU16ToFile(ecMemU16* mem, const char* filepath);
void ecWriteMemU32ToFile(ecMemU32* mem, const char* filepath);
void ecWriteMemU64ToFile(ecMemU64* mem, const char* filepath);
void ecWriteMemS8ToFile(ecMemS8* mem, const char* filepath);
void ecWriteMemS16ToFile(ecMemS16* mem, const char* filepath);
void ecWriteMemS32ToFile(ecMemS32* mem, const char* filepath);
void ecWriteMemS64ToFile(ecMemS64* mem, const char* filepath);

void ecAppendMemU8ToFile(ecMemU8* mem, const char* filepath);
void ecAppendMemU16ToFile(ecMemU16* mem, const char* filepath);
void ecAppendMemU32ToFile(ecMemU32* mem, const char* filepath);
void ecAppendMemU64ToFile(ecMemU64* mem, const char* filepath);
void ecAppendMemS8ToFile(ecMemS8* mem, const char* filepath);
void ecAppendMemS16ToFile(ecMemS16* mem, const char* filepath);
void ecAppendMemS32ToFile(ecMemS32* mem, const char* filepath);
void ecAppendMemS64ToFile(ecMemS64* mem, const char* filepath);

#ifdef __cplusplus
}
#endif

#endif /*File_h*/