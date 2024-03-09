#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = NULL;
	unsigned int len = 0;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	if (str != NULL)
	{
		while (str[len] != '\0')
			len++;
		
		new->str = malloc((len + 1) * sizeof(char));
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		for (len = 0; str[len] != '\0'; len++)
			new->str[len] = str[len];
		
		new->str[len] = '\0';
		new->len = len;
	}
	else
	{
		new->str = NULL;
		new->len = 0;
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
