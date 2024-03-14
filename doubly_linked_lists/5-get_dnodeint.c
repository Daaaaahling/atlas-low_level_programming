#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of dlistint_t linked list
 * @head: head of list to use
 * Return: nth node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
