#ifndef String_h
#define String_h

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

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

#ifdef __cplusplus
}
#endif

#endif /*String_h*/
