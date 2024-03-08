#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: list head
 * Return: number of elements in the linked list
 */
unsigned int list_len(h)
const list_t *h;
	{
		unsigned int count = 0;

		while (h != NULL)
		{
			count++;
			h = h->next;
	}
	
	return count;
}
