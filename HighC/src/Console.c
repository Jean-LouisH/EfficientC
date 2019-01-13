#include "../include/Console.h"
#include "../include/File.h"
#include "../include/Data/Memory.h"

void hcPrintFileToConsole(const char* filename) 
{
	hcString text = hcReadASCIIStringFromFile(filename);
	printf(text.data);
	hcFreeString(&text);
}

void hcConsolePause()
{
	printf("\n\nPress any key to continue.");
	getchar();
}