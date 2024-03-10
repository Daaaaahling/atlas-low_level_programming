#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);

	free(head);
}
