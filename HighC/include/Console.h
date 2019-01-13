#ifndef Console_h
#define Console_h

#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif

	void hcPrintFileToConsole(const char* filename);
	void hcConsolePause();

#ifdef __cplusplus
}
#endif

#endif /*Console_h*/