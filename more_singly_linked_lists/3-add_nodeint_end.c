#include "lists.h"
/**
 * add_nodeint_end - Adds a new node to the end of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Integer to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *current_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}
