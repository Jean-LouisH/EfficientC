#include "../include/Console.h"
#include "../include/File.h"
#include "../include/DataStructures/Memory.h"

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