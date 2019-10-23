#ifndef Node_h
#define Node_h

#ifdef __cplusplus
extern "C"
{
#endif
	typedef struct Node
	{
		void* element;
		struct Node* previous;
		struct Node* next;
	}ecNode;

#ifdef __cplusplus
}
#endif

#endif /*Node_h*/