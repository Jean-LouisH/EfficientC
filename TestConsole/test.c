#include "test.h"

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

void testStringComparison()
{
	hcString string = hcNewString("Testing");
	hcIsString(&string, "Banana");
	hcIsString(&string, "Test");
	hcIsString(&string, "Testing");
	hcFreeString(&string);
}