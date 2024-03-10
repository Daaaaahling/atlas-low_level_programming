#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list
 * @index: The index of the node, starting at 0
 *
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	while (index > 0 && node != NULL)
	{
		node = node->next;
		index--;
	}

	return (node);
}
