#ifndef File_h
#define File_h

#include <stdbool.h>
#include "Memory.h"

bool fileExists(const char* filename);
HighC_Memory_u8 readASCIIStringFromFile(const char* filename);

HighC_Memory_u8 readBinaryU8FromFile(const char* filename);
HighC_Memory_u16 readBinaryU16FromFile(const char* filename);
HighC_Memory_u32 readBinaryU32FromFile(const char* filename);
HighC_Memory_u64 readBinaryU64FromFile(const char* filename);
HighC_Memory_s8 readBinaryS8FromFile(const char* filename);
HighC_Memory_s16 readBinaryS16FromFile(const char* filename);
HighC_Memory_s32 readBinaryS32FromFile(const char* filename);
HighC_Memory_s64 readBinaryS64FromFile(const char* filename);

void writeBinaryU8ToFile(HighC_Memory_u8* binary, const char* filename);
void writeBinaryU16ToFile(HighC_Memory_u16* binary, const char* filename);
void writeBinaryU32ToFile(HighC_Memory_u32* binary, const char* filename);
void writeBinaryU64ToFile(HighC_Memory_u64* binary, const char* filename);
void writeBinaryS8ToFile(HighC_Memory_s8* binary, const char* filename);
void writeBinaryS16ToFile(HighC_Memory_s16* binary, const char* filename);
void writeBinaryS32ToFile(HighC_Memory_s32* binary, const char* filename);
void writeBinaryS64ToFile(HighC_Memory_s64* binary, const char* filename);

void appendBinaryU8ToFile(HighC_Memory_u8* binary, const char* filename);
void appendBinaryU16ToFile(HighC_Memory_u16* binary, const char* filename);
void appendBinaryU32ToFile(HighC_Memory_u32* binary, const char* filename);
void appendBinaryU64ToFile(HighC_Memory_u64* binary, const char* filename);
void appendBinaryS8ToFile(HighC_Memory_s8* binary, const char* filename);
void appendBinaryS16ToFile(HighC_Memory_s16* binary, const char* filename);
void appendBinaryS32ToFile(HighC_Memory_s32* binary, const char* filename);
void appendBinaryS64ToFile(HighC_Memory_s64* binary, const char* filename);

#endif /*File_h*/