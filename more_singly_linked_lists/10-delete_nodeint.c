#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in list
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *deleting_node;
	unsigned int current_index;

	if (!head || !*head)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	for (current_index = 0; current_index < index -1; current_index++)
	{
		if (!current_node || !current_node->next)
			return (-1);

		current_node = current_node->next;
	}

	deleting_node = current_node->next;

	if (!deleting_node)
		return (-1);

	current_node->next = deleting_node->next;
	free(deleting_node);

	return (1);
}
