#include "Console.h"
#include "File.h"
#include "Memory.h"

void hcPrintFileToConsole(const char* filename) 
{
	hcString text = hcReadASCIIStringFromFile(filename);
	printf(text.data);
	hcFreeString(&text);
}