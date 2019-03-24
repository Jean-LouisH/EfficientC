#include "../include/Logging.h"
#include "../include/File.h"
#include "../include/DataStructures/Memory.h"
#include "../include/DataStructures/Strings.h"
#include <string.h>

void ecPrintFileToConsole(const char* filename) 
{
	ecString text = ecReadASCIIStringFromFile(filename);
	printf(text.data);
	ecFreeString(&text);
}

void ecConsolePause()
{
	printf("\n\nPress any key to continue.");
	getchar();
}

void ecPrintCharArrayToConsole(const char* text)
{
	const int tabWidth = 30;
	ecString message = ecNewString(text);

	/*Inserts tabs between colon and latter text.*/
	for (int i = 0; i < message.length; i++)
		if (message.data[i] == ':')
			for (int j = 0; (j < (tabWidth - i)) && (i < tabWidth); j++)
				ecInsertCharIntoString(&message, ' ', i + 1);

	printf(message.data);
	ecFreeString(&message);
}