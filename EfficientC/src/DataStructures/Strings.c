#include "../include/DataStructures/Strings.h"
#include <string.h>
#include <stdlib.h>

ecString ecNewString(const char* initialString)
{
	ecString string;
	string.length = strlen(initialString);
	string.capacity = string.length + 1;
	string.data = calloc(string.capacity, sizeof(char));
	if (string.data != NULL)
		strcpy(string.data, initialString);
	return string;
}

void ecAppendCharToString(ecString* string, char character)
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

void ecAppendStringToString(ecString* firstString, ecString secondString)
{
	if (firstString->data != NULL && secondString.data != NULL)
		strcat(firstString->data, secondString.data);
}

void ecAssignCharToString(ecString* string, char character)
{
	if (string->data != NULL)
	{
		ecClearString(string);
		ecAppendCharToString(string, character);
	}
}

void ecAssignStringToString(ecString* stringCopy, ecString stringOriginal)
{
	if (stringCopy->data != NULL && stringOriginal.data != NULL)
		strcpy(stringCopy->data, stringOriginal.data);
}

void ecInsertCharIntoString(ecString* string, char character, uint32_t startIndex)
{
	if (string->data != NULL && startIndex <= string->length)
	{
		if (string->length + 1 >= string->capacity)
		{
			int newCapacity = string->capacity + 1;
			string->data = realloc(string->data, newCapacity * sizeof(char));
			if (string->data != NULL)
				string->capacity = newCapacity;
		}

		/*in case allocation fails, check again.*/
		if (string->length < string->capacity + 1)
		{
			for (int i = string->length; i >= startIndex; i--)
				string->data[i + 1] = string->data[i];
			string->length++;
			string->data[startIndex] = character;
			string->data[string->length + 1] = 0;
		}
	}
}

void ecInsertStringIntoString(ecString* string, ecString subString, uint32_t startIndex)
{
	if (string->data != NULL && startIndex <= string->length)
	{
		if (string->length + subString.length >= string->capacity)
		{
			int newCapacity = string->capacity + subString.length + 1;
			string->data = realloc(string->data, newCapacity * sizeof(char));
			if (string->data != NULL)
				string->capacity = newCapacity;
		}

		/*in case allocation fails, check again.*/
		if (string->length < string->capacity + subString.length)
		{
			for (int i = string->length; i >= startIndex; i--)
				string->data[i + subString.length] = string->data[i];
			string->length += subString.length;
			for (int i = 0; i < subString.length; i++)
				string->data[startIndex + i] = subString.data[i];
			string->data[string->length + 1] = 0;
		}
	}
}

void ecEraseIndicesFromString(ecString* string, uint32_t startIndex, uint32_t finishIndex)
{

}

void ecReplaceStringToString(ecString* string, ecString* subString, uint32_t startIndex)
{

}

void ecSwapStrings(ecString* firstString, ecString* secondString)
{
	if (firstString->data != NULL && secondString != NULL)
	{
		ecString intermediaryString;

		intermediaryString = *firstString;
		*firstString = *secondString;
		*secondString = intermediaryString;
	}
}

char ecPopBackString(ecString* string)
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

uint32_t ecGetIndexBeforeString(ecString* string, const char* text)
{
	uint32_t startIndex = 0;
	return startIndex;
}

uint32_t ecGetIndexAfterString(ecString* string, const char* text)
{
	uint32_t finishIndex = 0;
	return finishIndex;
}

ecString ecGetSubstring(ecString* string, uint32_t startIndex)
{
	ecString subString = ecNewString("");
	return subString;
}

void ecCapitalizeString(ecString* string)
{

}

void ecCasefoldString(ecString* string)
{

}

uint32_t ecCountSubstrings(ecString* string, const char* text)
{
	uint32_t subStringCount = 0;
	return subStringCount;
}

void ecExpandTabs(ecString* string, uint8_t tabSize)
{

}

void ecLowercaseString(ecString* string)
{

}

void ecUppercaseString(ecString* string)
{

}

bool ecIsStringAlphanumeric(ecString* string)
{
	bool isAlphanumeric = false;
	return isAlphanumeric;
}

bool ecIsStringAlphabetical(ecString* string)
{
	bool isAlphabetical = false;
	return isAlphabetical;
}

bool ecIsStringDecimal(ecString* string)
{
	bool isDecimal = false;
	return isDecimal;
}

bool ecIsStringCapitalized(ecString* string)
{
	bool isCapitalized = false;

	if (string->data != NULL)
		isCapitalized = !(string->data[0] & 0x0020);

	return isCapitalized;
}

bool ecIsStringLowercase(ecString* string)
{
	bool isLowercase = false;
	return isLowercase;
}

bool ecIsStringUppercase(ecString* string)
{
	bool isUppercase = false;
	return isUppercase;
}

bool ecHasWhitespace(ecString* string)
{
	bool hasWhitespace= false;
	return hasWhitespace;
}

bool ecDoesStringStartWith(ecString* string, const char* text)
{
	bool startsWithString = false;
	return startsWithString;
}

bool ecDoesStringEndWith(ecString* string, const char* text)
{
	bool endsWithString = false;
	return endsWithString;
}

bool ecIsStringAndCharArrayTheSame(ecString* string, const char* text)
{
	bool isSame = false;

	if (string->data != NULL)
		isSame = (strcmp(string->data, text) == 0);

	return isSame;
}

bool ecisStringEmpty(ecString* string)
{
	bool isEmpty = true;

	if (string->data != NULL)
		if (string->length > 0)
			isEmpty = false;

	return isEmpty;
}

void ecReserveString(ecString* string, uint32_t newCapacity)
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

void ecShrinkStringToFit(ecString* string)
{
	if (string->data != NULL)
		string->capacity = string->length + 1;
}

void ecClearString(ecString* string)
{
	if (string->data != NULL)
	{
		string->data[0] = 0;
		string->length = 0;
	}
}

void ecFreeString(ecString* string)
{
	if (string->data != NULL)
	{
		free(string->data);
		string->length = 0;
		string->capacity = 0;
	}
}
