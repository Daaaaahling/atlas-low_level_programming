#include "lists.h"
/**
 * list_len - returns number of elements in linked list
 * @h: list head
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t u = 0;

	while (h)
	{
		u++;
		h = h->next;
	}
	return (n);
}
