#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t linked list
 * @head: double pointer to head of list
 * @index: index of the new node
 * Return: 1 on success. -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current_node = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current_node)
			return (-1);
		current_node = current_node->next;
		i++;
	}
	if (!current_node || !(current_node->next))
		return (-1);

	temp = current_node->next;
	current_node->next = temp->next;
	if (temp->next)
		temp->next->prev = current_node;

	free(temp);
	return (1)
}
