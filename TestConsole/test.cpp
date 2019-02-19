#include "test.hpp"

void Test::printMainToConsole()
{
	printf("\n\tTesting Printing Main to Console...\n");
	ecPrintFileToConsole("main.cpp");
	ecConsolePause();
}

void Test::fileOperations()
{
	ecString fileName;
	ecString fileExtension;
	ecString ascii;
	ecMemU8 memU8;

	const char* fileTest = "FileTest.txt";

	printf("\n\tTesting File Operations...");

	if (ecFileExists(fileTest))
	{
		fileName = ecExtractFileName(fileTest);
		fileExtension = ecExtractFileExtension(fileTest);

		ascii = ecReadASCIIStringFromFile(fileTest);
		memU8 = ecReadMemU8FromFile(fileTest);
	}

	ecConsolePause();
}

void Test::stringComparison()
{
	printf("\n\tTesting String Comparison...");
	ecString string = ecNewString("Testing");
	ecIsStringAndCharArrayTheSame(&string, "Banana");
	ecIsStringAndCharArrayTheSame(&string, "Test");
	ecIsStringAndCharArrayTheSame(&string, "Testing");
	ecFreeString(&string);

	ecConsolePause();
}