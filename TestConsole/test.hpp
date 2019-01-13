#include <HighC.h>
#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == Cpp)

class Test
{
public:
	void PrintMainToConsole();
	void FileOperations();
	void StringComparison();
};

#endif