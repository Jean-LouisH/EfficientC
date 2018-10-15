#ifndef String_h
#define String_h

typedef struct
{
	char* data;
	int length;
	int capacity;
}HighC_String;

HighC_String newString(const char* initialString);
void appendString(HighC_String* string, char symbol);
void clearString(HighC_String* string);
void freeString(HighC_String* string);

#endif /*String_h*/
