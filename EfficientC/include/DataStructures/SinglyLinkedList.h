#ifndef SinglyLinkedList_h
#define SinglyLinkedList_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>
#include "Node.h"

	typedef struct
	{
		Node head;
		Node tail;
		size_t elementSize;
		uint32_t size;
	}ecSinglyLinkedList;

	void ecDefineSinglyLinkedListElementSize(ecSinglyLinkedList* linkedList, size_t elementSize);
	void ecAddToSinglyLinkedList(ecSinglyLinkedList* linkedList, void* element);
	void ecInsertAfterInSinglyLinkedList(ecSinglyLinkedList* linkedList, uint32_t index, void* element);
	void ecRemoveFromSinglyLinkedList(ecSinglyLinkedList* linkedList, void* element);
	void ecGetFirstSinglyLinkedListElement(ecSinglyLinkedList* linkedList);
	void ecGetLastSinglyLinkedListElement(ecSinglyLinkedList* linkedList);
	bool ecSearchInSinglyLinkedList(ecSinglyLinkedList* linkedList, void* element);

#ifdef __cplusplus
}
#endif

#endif /*SinglyLinkedList_h*/