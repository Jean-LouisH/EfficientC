#include "Strings.h"
#include <string.h>
#include <stdlib.h>

HighC_String newString(const char* initialString)
{
	HighC_String string;
	string.length = strlen(initialString);
	if (string.length < 1)
		string.capacity = 1;
	else
		string.capacity = string.length;
	string.data = calloc(string.capacity, sizeof(char));
	strcpy(string.data, initialString);
	return string;
}

void appendString(HighC_String* string, char symbol)
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
		string->data[string->length] = symbol;
		string->data[string->length + 1] = 0;
		string->length++;
	}
}

void clearString(HighC_String* string)
{
	string->data[0] = 0;
	string->length = 0;
}

void freeString(HighC_String* string)
{
	clearString(string);
	free(string->data);
	string->capacity = 0;
}
