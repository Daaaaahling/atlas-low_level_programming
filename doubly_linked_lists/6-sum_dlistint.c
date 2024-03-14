#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data in nodes
 * @head: head of list to use
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current && current->prev)
		current = current->prev;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
