#include "test.h"
#include <Console.h>

void testPrintMainToConsole()
{
	hcPrintFileToConsole("main.c");
	hcConsolePause();
}

void testFileOperations()
{
	hcString fileName;
	hcString fileExtension;
	hcString ASCII;
	hcMemoryU8 binaryU8;

	const char* fileTest = "FileTest.txt";

	if (hcFileExists(fileTest))
	{
		fileName = hcExtractFileName(fileTest);
		fileExtension = hcExtractFileExtension(fileTest);

		ASCII = hcReadASCIIStringFromFile(fileTest);
		binaryU8 = hcReadBinaryU8FromFile(fileTest);
	}

	hcConsolePause();
}