#ifndef String_h
#define String_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

	typedef struct
	{
		char* data;
		uint32_t length;
		uint32_t capacity;
	}hcString;

	hcString hcNewString(const char* initialString);
	void hcAppendCharToString(hcString* string, char character); 
	void hcAppendStringToString(hcString* firstString, hcString secondString);
	void hcAssignCharToString(hcString* string, char character);
	void hcAssignStringToString(hcString* stringCopy, hcString* stringOriginal);
	void hcInsertCharIntoString(hcString* stringTarget, char character, uint32_t index);
	void hcInsertStringIntoString(hcString* stringTarget, char subString, uint32_t index);
	void hcEraseFromString(hcString* string, uint32_t first, uint32_t last);
	void hcReplaceToString(hcString* stringTarget, uint32_t first, uint32_t last, hcString* subString);
	void hcSwapStrings(hcString* firstString, hcString* secondString);
	char hcPopBackString(hcString* string);
	hcString hcGetSubString(hcString* string, uint32_t index);
	bool hcIsStringAndCharArrayTheSame(hcString* string, const char* text);
	bool hcisStringEmpty(hcString* string);
	void hcReserveString(hcString* string, uint32_t newCapacity);
	void hcShrinkStringToFit(hcString* string);
	void hcClearString(hcString* string);
	void hcFreeString(hcString* string);

#ifdef __cplusplus
}
#endif

#endif /*String_h*/
