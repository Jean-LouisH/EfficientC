#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == Cpp)
#include <EfficientC.h>

class Test
{
public:
	void PrintMainToConsole();
	void FileOperations();
	void StringComparison();
};

#endif