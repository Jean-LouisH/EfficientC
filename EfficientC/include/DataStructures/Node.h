#ifndef Node_h
#define Node_h

#ifdef __cplusplus
extern "C"
{
#endif
	typedef struct
	{
		void* element;
		Node* previous;
		Node* next;
	}Node;

#ifdef __cplusplus
}
#endif

#endif /*Node_h*/