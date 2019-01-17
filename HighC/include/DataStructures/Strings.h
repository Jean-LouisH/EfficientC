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
void hcAssignStringToString(hcString* stringCopy, hcString stringOriginal);
void hcInsertCharIntoString(hcString* stringTarget, char character, uint32_t startIndex);
void hcInsertStringIntoString(hcString* stringTarget, hcString subString, uint32_t startIndex);
void hcEraseIndicesFromString(hcString* string, uint32_t startIndex, uint32_t finishIndex);
void hcReplaceStringToString(hcString* stringTarget, hcString* subString, uint32_t startIndex);
void hcSwapStrings(hcString* firstString, hcString* secondString);
char hcPopBackString(hcString* string);
uint32_t hcGetIndexBeforeString(hcString* string, const char* text);
uint32_t hcGetIndexAfterString(hcString* string, const char* text);
hcString hcGetSubString(hcString* string, uint32_t startIndex);
void hcCapitalizeString(hcString* string);
void hcCasefoldString(hcString* string);
uint32_t hcCountSubstrings(hcString* string, const char* text);
void hcExpendTabs(hcString* string, uint8_t tabSize);
bool hcIsStringAlphanumeric(hcString* string);
bool hcIsStringAlphabet(hcString* string);
bool hcIsStringDecimal(hcString* string);
bool hcDoesStringEndWith(hcString* string, const char* text);
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
