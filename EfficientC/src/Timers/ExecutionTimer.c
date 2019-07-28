#include "../include/Timers/ExecutionTimer.h"

void ecStartExecutionTimer(ecExecutionTimer* executionTimer)
{
	executionTimer->start = clock();
}

void ecStopExecutionTimer(ecExecutionTimer* executionTimer)
{
	executionTimer->end = clock();
	executionTimer->deltaTime_s = ((double) (executionTimer->end - executionTimer->start) / CLOCKS_PER_SEC);
}