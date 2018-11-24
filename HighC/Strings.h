#ifndef String_h
#define String_h

#include <stdint.h>
#include <stdbool.h>

typedef struct
{
	char* data;
	uint32_t length;
	uint32_t capacity;
}hcString;

hcString hcNewString(const char* initialString);
void hcAppendString(hcString* string, char symbol); 
bool hcIsString(hcString* string, const char* text);
void hcClearString(hcString* string);
void hcFreeString(hcString* string);

#endif /*String_h*/
