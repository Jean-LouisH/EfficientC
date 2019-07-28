#include "../include/Timers/ExecutionTimer.h"

void ecStartExecutionTimer(ExecutionTimer* executionTimer)
{
	executionTimer->start = clock();
}

void ecStopExecutionTimer(ExecutionTimer* executionTimer)
{
	executionTimer->end = clock();
	executionTimer->deltaTime_s = ((double) (executionTimer->end - executionTimer->start) / CLOCKS_PER_SEC);
}