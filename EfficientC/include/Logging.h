#ifndef Logging_h
#define Logging_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>

void ecPrintFileToConsole(const char* filename);
void ecConsolePause();
void ecPrintCharArrayToConsole(const char* text);

#ifdef __cplusplus
}

#endif

#endif /*Logging_h*/