#include "../include/DataStructures/SinglyLinkedList.h"
#include <stdlib.h>

void ecDefineSinglyLinkedListElementSize(ecSinglyLinkedList* linkedList, size_t elementSize)
{
	linkedList->elementSize = elementSize;
}

void ecAddToSinglyLinkedList(ecSinglyLinkedList* linkedList, void* element)
{
	ecNode* newNode = malloc(sizeof(ecNode));
	ecNode* currentNode = linkedList->head;

	newNode->element = element;

	if (linkedList->head == NULL)
	{
		linkedList->head = newNode;
	}
	else
	{
		while (currentNode->next != NULL)
			currentNode = currentNode->next;

		currentNode->next = newNode;
	}
}

void ecInsertAfterInSinglyLinkedList(ecSinglyLinkedList* linkedList, uint32_t index, void* element)
{

}

void ecRemoveFromSinglyLinkedList(ecSinglyLinkedList* linkedList, void* element)
{

}

void ecGetFirstSinglyLinkedListElement(ecSinglyLinkedList* linkedList)
{

}

void ecGetLastSinglyLinkedListElement(ecSinglyLinkedList* linkedList)
{

}

bool ecSearchInSinglyLinkedList(ecSinglyLinkedList* linkedList, void* element)
{

}