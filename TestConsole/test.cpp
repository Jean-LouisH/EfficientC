#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == Cpp)
#include "test.hpp"

void Test::PrintMainToConsole()
{
	printf("\n\tTesting Printing Main to Console...\n");
	hcPrintFileToConsole("main.cpp");
	hcConsolePause();
}

void Test::FileOperations()
{
	hcString fileName;
	hcString fileExtension;
	hcString ascii;
	hcMemU8 memU8;

	const char* fileTest = "FileTest.txt";

	printf("\n\tTesting File Operations...");

	if (hcFileExists(fileTest))
	{
		fileName = hcExtractFileName(fileTest);
		fileExtension = hcExtractFileExtension(fileTest);

		ascii = hcReadASCIIStringFromFile(fileTest);
		memU8 = hcReadMemU8FromFile(fileTest);
	}

	hcConsolePause();
}

void Test::StringComparison()
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