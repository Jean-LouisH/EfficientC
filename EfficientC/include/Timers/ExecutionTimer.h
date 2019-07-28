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
	}ExecutionTimer;

	void ecStartExecutionTimer(ExecutionTimer* executionTimer);
	void ecStopExecutionTimer(ExecutionTimer* executionTimer);

#ifdef __cplusplus
}
#endif

#endif /*ExecutionTimer_h*/