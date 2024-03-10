#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
