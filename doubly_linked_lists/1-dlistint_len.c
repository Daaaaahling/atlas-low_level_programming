#include "lists.h"
/**
 * dlistint_len - prints  number of elements in dlistint_t list
 * @h: list to use
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (head == NULL)
		return count;

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return count;
}
