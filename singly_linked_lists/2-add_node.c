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
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		 return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	while (str[len] != '\0')
	{
		len++;
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

