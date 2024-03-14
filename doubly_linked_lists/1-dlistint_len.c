#include "lists.h"
/**
 * dlistint_len - prints  number of elements in dlistint_t list
 * @h: list to use
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return count;

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return count;
}
