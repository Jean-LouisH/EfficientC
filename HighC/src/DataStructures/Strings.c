#include "../include/DataStructures/Strings.h"
#include <string.h>
#include <stdlib.h>

hcString hcNewString(const char* initialString)
{
	hcString string;
	string.length = strlen(initialString);
	string.capacity = string.length + 1;
	string.data = calloc(string.capacity, sizeof(char));
	if (string.data != 0)
		strcpy(string.data, initialString);
	return string;
}

void hcAppendCharToString(hcString* string, const char character)
{
	if (string->data != 0)
	{
		if (string->length >= string->capacity)
		{
			int newCapacity = string->capacity + 10;
			string->data = realloc(string->data, newCapacity * sizeof(char));
			if (string->data != NULL)
				string->capacity = newCapacity;
		}

		/*in case allocation fails, check again.*/
		if (string->length < string->capacity)
		{
			string->data[string->length] = character;
			string->data[string->length + 1] = 0;
			string->length++;
		}
	}
}

void hcAppendStringToString(hcString* firstString, hcString secondString)
{

}

void hcAssignCharToString(hcString* string, const char character)
{

}

void hcAssignStringToString(hcString* stringCopy, hcString* stringOriginal)
{

}

void hcInsertCharIntoString(hcString* stringTarget, const char character, uint32_t index)
{

}

void hcInsertStringIntoString(hcString* stringTarget, const char subString, uint32_t index)
{

}

void hcEraseFromString(hcString* string, uint32_t first, uint32_t last)
{

}

void hcReplaceToString(hcString* stringTarget, uint32_t first, uint32_t last, hcString* subString)
{

}

void hcSwapStrings(hcString* firstString, hcString* secondString)
{

}

char hcPopBackString(hcString* string)
{
	char character = NULL;
	return character;
}

hcString hcGetSubString(hcString* string, uint32_t index)
{
	hcString subString = hcNewString("");
	return subString;
}

bool hcIsStringAndCharArrayTheSame(hcString* string, const char* text)
{
	bool isSame = false;

	if (string->data != 0)
	{
		isSame = (strcmp(string->data, text) == 0);
	}

	return isSame;
}

bool hcisStringEmpty(hcString* string)
{

}

void hcReserveString(hcString* string, uint32_t newCapacity)
{

}

void hcShrinkStringToFit(hcString* string)
{

}

void hcClearString(hcString* string)
{
	if (string->data != 0)
	{
		string->data[0] = 0;
		string->length = 0;
	}
}

void hcFreeString(hcString* string)
{
	if (string->data != 0)
	{
		free(string->data);
		string->length = 0;
		string->capacity = 0;
	}
}
