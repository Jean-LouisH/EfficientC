#include "test.hpp"

void Test::memToStringConversions()
{

}

void Test::endianessConversions()
{

}

void Test::memoryAllocations()
{

}

void Test::streaming()
{

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

	ecFreeString(&fileName);
	ecFreeString(&fileExtension);
	ecFreeString(&ascii);

	ecConsolePause();
}

void Test::stringOperations()
{
	printf("\n\tTesting String Comparison...");
	ecString string = ecNewString("Testing");
	ecIsStringAndCharArrayTheSame(&string, "Banana");
	ecIsStringAndCharArrayTheSame(&string, "Test");
	ecIsStringAndCharArrayTheSame(&string, "Testing");
	ecFreeString(&string);

	ecConsolePause();
}

void Test::logging()
{
	ecPrintCharArrayToConsole("\n\tTesting Printing Main to Console...\n");
	ecPrintFileToConsole("main.cpp");
	ecPrintCharArrayToConsole("\nTesting tab spacing once: with this");
	ecConsolePause();
}