#include "../include/DataStructures/Strings.h"
#include <string.h>
#include <stdlib.h>

hcString hcNewString(const char* initialString)
{
	hcString string;
	string.length = strlen(initialString);
	string.capacity = string.length + 1;
	string.data = calloc(string.capacity, sizeof(char));
	if (string.data != NULL)
		strcpy(string.data, initialString);
	return string;
}

void hcAppendCharToString(hcString* string, char character)
{
	if (string->data != NULL)
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
	if (firstString->data != NULL && secondString.data != NULL)
		strcat(firstString->data, secondString.data);
}

void hcAssignCharToString(hcString* string, char character)
{
	if (string->data != NULL)
	{
		hcClearString(string);
		hcAppendCharToString(string, character);
	}
}

void hcAssignStringToString(hcString* stringCopy, hcString stringOriginal)
{
	if (stringCopy->data != NULL && stringOriginal.data != NULL)
		strcpy(stringCopy->data, stringOriginal.data);
}

void hcInsertCharIntoString(hcString* stringTarget, char character, uint32_t startIndex)
{

}

void hcInsertStringIntoString(hcString* stringTarget, hcString subString, uint32_t startIndex)
{

}

void hcEraseIndicesFromString(hcString* string, uint32_t startIndex, uint32_t finishIndex)
{

}

void hcReplaceStringToString(hcString* stringTarget, hcString* subString, uint32_t startIndex)
{

}

void hcSwapStrings(hcString* firstString, hcString* secondString)
{
	if (firstString->data != NULL && secondString != NULL)
	{
		hcString intermediaryString;

		intermediaryString = *firstString;
		*firstString = *secondString;
		*secondString = intermediaryString;
	}
}

char hcPopBackString(hcString* string)
{
	char character = NULL;

	if (string->data != NULL)
	{
		character = string->data[string->length];
		string->data[string->length - 1] = 0;
		string->length--;
	}

	return character;
}

uint32_t hcGetIndexBeforeString(hcString* string, const char* text)
{
	uint32_t startIndex = 0;
	return startIndex;
}

uint32_t hcGetIndexAfterString(hcString* string, const char* text)
{
	uint32_t finishIndex = 0;
	return finishIndex;
}

hcString hcGetSubString(hcString* string, uint32_t startIndex)
{
	hcString subString = hcNewString("");
	return subString;
}

void hcCapitalizeString(hcString* string)
{

}

void hcCasefoldString(hcString* string)
{

}

uint32_t hcCountSubstrings(hcString* string, const char* text)
{
	uint32_t subStringCount = 0;
	return subStringCount;
}

void hcExpendTabs(hcString* string, uint8_t tabSize)
{

}

void hcLowercaseString(hcString* string)
{

}

void hcUppercaseString(hcString* string)
{

}

bool hcIsStringAlphanumeric(hcString* string)
{
	bool isAlphanumeric = false;
	return isAlphanumeric;
}

bool hcIsStringAlphabetical(hcString* string)
{
	bool isAlphabetical = false;
	return isAlphabetical;
}

bool hcIsStringDecimal(hcString* string)
{
	bool isDecimal = false;
	return isDecimal;
}

bool hcIsStringLowercase(hcString* string)
{
	bool isLowercase = false;
	return isLowercase;
}

bool hcIsStringUppercase(hcString* string)
{
	bool isUppercase = false;
	return isUppercase;
}

bool hcHasWhitespace(hcString* string)
{
	bool hasWhitespace= false;
	return hasWhitespace;
}

bool hcDoesStringStartWith(hcString* string, const char* text)
{
	bool startsWithString = false;
	return startsWithString;
}

bool hcDoesStringEndWith(hcString* string, const char* text)
{
	bool endsWithString = false;
	return endsWithString;
}

bool hcIsStringAndCharArrayTheSame(hcString* string, const char* text)
{
	bool isSame = false;

	if (string->data != NULL)
		isSame = (strcmp(string->data, text) == 0);

	return isSame;
}

bool hcisStringEmpty(hcString* string)
{
	bool isEmpty = true;

	if (string->data != NULL)
		if (string->length > 0)
			isEmpty = false;

	return isEmpty;
}

void hcReserveString(hcString* string, uint32_t newCapacity)
{
	if (string->data != NULL)
	{
		if (newCapacity > string->capacity)
		{
			string->data = realloc(string->data, newCapacity * sizeof(char));
			if (string->data != NULL)
				string->capacity = newCapacity;
		}
	}
}

void hcShrinkStringToFit(hcString* string)
{
	if (string->data != NULL)
		string->capacity = string->length + 1;
}

void hcClearString(hcString* string)
{
	if (string->data != NULL)
	{
		string->data[0] = 0;
		string->length = 0;
	}
}

void hcFreeString(hcString* string)
{
	if (string->data != NULL)
	{
		free(string->data);
		string->length = 0;
		string->capacity = 0;
	}
}
