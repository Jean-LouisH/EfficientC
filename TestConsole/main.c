#include "test.h"
#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == C)

int main(int argc, char* argv[])
{
	testPrintMainToConsole();
	testFileOperations();
	testStringComparison();
	return 0;
}

#endif
