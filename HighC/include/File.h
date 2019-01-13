#ifndef File_h
#define File_h

#include <stdbool.h>
#include "DataStructures/Memory.h"
#include "DataStructures/Strings.h"

#ifdef __cplusplus
extern "C"
{
#endif

	bool hcFileExists(const char* filepath);
	hcString hcExtractFileName(const char* filepath);
	hcString hcExtractFileExtension(const char* filepath);
	hcString hcReadASCIIStringFromFile(const char* filepath);

	hcMemoryU8 hcReadBinaryU8FromFile(const char* filepath);
	hcMemoryU16 hcReadBinaryU16FromFile(const char* filepath);
	hcMemoryU32 hcReadBinaryU32FromFile(const char* filepath);
	hcMemoryU64 hcReadBinaryU64FromFile(const char* filepath);
	hcMemoryS8 hcReadBinaryS8FromFile(const char* filepath);
	hcMemoryS16 hcReadBinaryS16FromFile(const char* filepath);
	hcMemoryS32 hcReadBinaryS32FromFile(const char* filepath);
	hcMemoryS64 hcReadBinaryS64FromFile(const char* filepath);

	void hcWriteBinaryU8ToFile(hcMemoryU8* binary, const char* filepath);
	void hcWriteBinaryU16ToFile(hcMemoryU16* binary, const char* filepath);
	void hcWriteBinaryU32ToFile(hcMemoryU32* binary, const char* filepath);
	void hcWriteBinaryU64ToFile(hcMemoryU64* binary, const char* filepath);
	void hcWriteBinaryS8ToFile(hcMemoryS8* binary, const char* filepath);
	void hcWriteBinaryS16ToFile(hcMemoryS16* binary, const char* filepath);
	void hcWriteBinaryS32ToFile(hcMemoryS32* binary, const char* filepath);
	void hcWriteBinaryS64ToFile(hcMemoryS64* binary, const char* filepath);

	void hcAppendBinaryU8ToFile(hcMemoryU8* binary, const char* filepath);
	void hcAppendBinaryU16ToFile(hcMemoryU16* binary, const char* filepath);
	void hcAppendBinaryU32ToFile(hcMemoryU32* binary, const char* filepath);
	void hcAppendBinaryU64ToFile(hcMemoryU64* binary, const char* filepath);
	void hcAppendBinaryS8ToFile(hcMemoryS8* binary, const char* filepath);
	void hcAppendBinaryS16ToFile(hcMemoryS16* binary, const char* filepath);
	void hcAppendBinaryS32ToFile(hcMemoryS32* binary, const char* filepath);
	void hcAppendBinaryS64ToFile(hcMemoryS64* binary, const char* filepath);

#ifdef __cplusplus
}
#endif

#endif /*File_h*/