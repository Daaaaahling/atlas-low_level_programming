#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of linked list
 * @h: pointer to list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (u)
	{
		if (!u->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", u->len, u->str);
		u = u->next;
		s++;
	}
	
	return (s);
}
