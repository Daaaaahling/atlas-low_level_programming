#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list and returns its data
 * @head: Double pointer to the head of the list
 *
 * Return: The head node’s data (n). If the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int removed_data;
	listint_t *removed_node;

	if (!head || !*head)
		return (0);

	removed_node = *head;
	removed_data = removed_node->n;
	*head = removed_node->next;
	free(removed_node);

	return (removed_data);
}
