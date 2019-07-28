#ifndef ExecutionTimer_h
#define ExecutionTimer_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <time.h>

	typedef struct
	{
		clock_t start;
		clock_t end;
		double deltaTime_s;
	}ecExecutionTimer;

	void ecStartExecutionTimer(ecExecutionTimer* executionTimer);
	void ecStopExecutionTimer(ecExecutionTimer* executionTimer);

#ifdef __cplusplus
}
#endif

#endif /*ExecutionTimer_h*/