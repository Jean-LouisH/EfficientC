#ifndef String_h
#define String_h

#include <stdint.h>

typedef struct
{
	char* data;
	uint32_t length;
	uint32_t capacity;
}hcString;

hcString hcNewString(const char* initialString);
void hcAppendString(hcString* string, char symbol);
void hcClearString(hcString* string);
void hcFreeString(hcString* string);

#endif /*String_h*/
