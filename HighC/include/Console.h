#ifndef Console_h
#define Console_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>

void hcPrintFileToConsole(const char* filename);
void hcConsolePause();

#ifdef __cplusplus
}
#endif

#endif /*Console_h*/