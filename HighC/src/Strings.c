#include <Strings.h>
#include <string.h>
#include <stdlib.h>

hcString hcNewString(const char* initialString)
{
	hcString string;
	string.length = strlen(initialString);
	if (string.length < 1)
		string.capacity = 1;
	else
		string.capacity = string.length + 1;
	string.data = calloc(string.capacity, sizeof(char));
	strcpy(string.data, initialString);
	return string;
}

void hcAppendString(hcString* string, char symbol)
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

bool hcIsString(hcString* string, const char* text)
{
	return (strcmp(string->data, text) == 0);
}

void hcClearString(hcString* string)
{
	string->data[0] = 0;
	string->length = 0;
}

void hcFreeString(hcString* string)
{
	hcClearString(string);
	free(string->data);
	string->capacity = 0;
}
