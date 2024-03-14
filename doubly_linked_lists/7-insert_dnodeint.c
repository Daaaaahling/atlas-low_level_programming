#include "lists.h"
/**
 * insert_dnodeint_at_index - adds new node at given position
 * @h: pointer to pointer to head of list
 * @idx: index of new node
 * @n: data to be stored in new node
 * Return: adress of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!*h)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	new_node->next = current->next;
	if (current->next)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
