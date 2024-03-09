#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str != NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
	}

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;

	return (new);
}
