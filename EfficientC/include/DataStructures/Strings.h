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
}ecString;

ecString ecNewString(const char* initialString);
void ecAppendCharToString(ecString* string, char character); 
void ecAppendStringToString(ecString* firstString, ecString secondString);
void ecAssignCharToString(ecString* string, char character);
void ecAssignStringToString(ecString* stringCopy, ecString stringOriginal);
void ecInsertCharIntoString(ecString* string, char character, uint32_t startIndex);
void ecInsertStringIntoString(ecString* string, ecString subString, uint32_t startIndex);
void ecEraseIndicesFromString(ecString* string, uint32_t startIndex, uint32_t finishIndex);
void ecReplaceStringToString(ecString* string, ecString* subString, uint32_t startIndex);
void ecSwapStrings(ecString* firstString, ecString* secondString);
char ecPopBackString(ecString* string);
uint32_t ecGetIndexBeforeString(ecString* string, const char* text);
uint32_t ecGetIndexAfterString(ecString* string, const char* text);
ecString ecGetSubstring(ecString* string, uint32_t startIndex);
void ecCapitalizeString(ecString* string);
void ecCasefoldString(ecString* string);
uint32_t ecCountSubstrings(ecString* string, const char* text);
void ecExpandTabs(ecString* string, uint8_t tabSize);
void ecLowercaseString(ecString* string);
void ecUppercaseString(ecString* string);
bool ecIsStringAlphanumeric(ecString* string);
bool ecIsStringAlphabetical(ecString* string);
bool ecIsStringDecimal(ecString* string);
bool ecIsStringCapitalized(ecString* string);
bool ecIsStringLowercase(ecString* string);
bool ecIsStringUppercase(ecString* string);
bool ecHasWhitespace(ecString* string);
bool ecDoesStringStartWith(ecString* string, const char* text);
bool ecDoesStringEndWith(ecString* string, const char* text);
bool ecIsStringAndCharArrayTheSame(ecString* string, const char* text);
bool ecisStringEmpty(ecString* string);
void ecReserveString(ecString* string, uint32_t newCapacity);
void ecShrinkStringToFit(ecString* string);
void ecClearString(ecString* string);
void ecFreeString(ecString* string);

#ifdef __cplusplus
}
#endif

#endif /*String_h*/
