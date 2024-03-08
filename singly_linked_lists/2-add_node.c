#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds new node to the beginning of linked list
 * @head: double pointer to the head of list
 * @str: new string to add in node
 * Return: address of new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head || !str)
		return (NULL);

	 new = malloc(sizeof(list_t));
	 if (!new)
		 return (NULL);

	 new->str = strdup(str);
	 if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}

