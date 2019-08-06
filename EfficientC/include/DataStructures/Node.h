#ifndef Node_h
#define Node_h

#ifdef __cplusplus
extern "C"
{
#endif
	typedef struct
	{
		void* element;
		ecNode* previous;
		ecNode* next;
	}ecNode;

#ifdef __cplusplus
}
#endif

#endif /*Node_h*/