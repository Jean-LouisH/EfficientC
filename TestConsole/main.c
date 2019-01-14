#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == C)
#include "test.h"

int main(int argc, char* argv[])
{
	testPrintMainToConsole();
	testFileOperations();
	testStringComparison();
	return 0;
}

#endif
