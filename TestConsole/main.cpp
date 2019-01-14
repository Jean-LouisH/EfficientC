#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == Cpp)
#include "test.hpp"

int main(int argc, char* argv[])
{
	Test test;
	test.PrintMainToConsole();
	test.FileOperations();
	test.StringComparison();
	return 0;
}

#endif
