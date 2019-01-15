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
	uint64_t length;
	uint64_t capacity;
}hcString;

hcString hcNewString(const char* initialString);
void hcAppendCharToString(hcString* string, char character); 
void hcAppendStringToString(hcString* firstString, hcString secondString);
void hcAssignCharToString(hcString* string, char character);
void hcAssignStringToString(hcString* stringCopy, hcString stringOriginal);
void hcInsertCharIntoString(hcString* stringTarget, char character, uint64_t index);
void hcInsertStringIntoString(hcString* stringTarget, char subString, uint64_t index);
void hcEraseFromString(hcString* string, uint64_t first, uint64_t last);
void hcReplaceToString(hcString* stringTarget, uint64_t first, uint64_t last, hcString* subString);
void hcSwapStrings(hcString* firstString, hcString* secondString);
char hcPopBackString(hcString* string);
hcString hcGetSubString(hcString* string, uint64_t index);
bool hcIsStringAndCharArrayTheSame(hcString* string, const char* text);
bool hcisStringEmpty(hcString* string);
void hcReserveString(hcString* string, uint64_t newCapacity);
void hcShrinkStringToFit(hcString* string);
void hcClearString(hcString* string);
void hcFreeString(hcString* string);

#ifdef __cplusplus
}
#endif

#endif /*String_h*/
