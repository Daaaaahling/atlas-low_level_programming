#include "lists.h"
/**
 * dlistint_len - prints  number of elements in dlistint_t list
 * @h: list to use
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	int node_count = 0;

	if (head == NULL)
		return (node_count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}
