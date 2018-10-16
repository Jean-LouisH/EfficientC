#ifndef String_h
#define String_h

typedef struct
{
	char* data;
	int length;
	int capacity;
}hcString;

hcString hcNewString(const char* initialString);
void hcAppendString(hcString* string, char symbol);
void hcClearString(hcString* string);
void hcFreeString(hcString* string);

#endif /*String_h*/
