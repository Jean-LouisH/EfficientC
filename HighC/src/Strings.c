#include <Strings.h>
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

void hcAppendString(hcString* string, char symbol)
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
			string->data[string->length] = symbol;
			string->data[string->length + 1] = 0;
			string->length++;
		}
	}
}

bool hcIsString(hcString* string, const char* text)
{
	bool isSame = false;

	if (string->data != 0)
	{
		isSame = (strcmp(string->data, text) == 0);
	}

	return isSame;
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
