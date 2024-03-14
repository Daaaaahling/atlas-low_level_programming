#include "lists.h"
/**
 * add_dnodeint - adds a new node to dlistint_t list
 * @head: head of list
 *  @n: data to put in new node
 *  Return: the address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;

	}
	else
	{
		new_node->next = NULL;
	}

	*head = new_node;

	return (new_node);
}
