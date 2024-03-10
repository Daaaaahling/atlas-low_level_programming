#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets head to NULL.
 * @head: Double pointer to the head of the list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
