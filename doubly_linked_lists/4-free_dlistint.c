#include "lists.h"
/**
 * free_dlistint - frees dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *tmp;

	while (head != NULL && head->prev != NULL)
		head = head->prev;

	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
