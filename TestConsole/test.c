#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == C)
#include "test.h"

void testPrintMainToConsole()
{
	printf("\n\tTesting Printing Main to Console...\n");
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

	printf("\n\tTesting File Operations...");

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
	printf("\n\tTesting String Comparison...");
	hcString string = hcNewString("Testing");
	hcIsStringAndCharArrayTheSame(&string, "Banana");
	hcIsStringAndCharArrayTheSame(&string, "Test");
	hcIsStringAndCharArrayTheSame(&string, "Testing");
	hcFreeString(&string);

	hcConsolePause();
}

#endif