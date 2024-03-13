#include "lists.h"
/**
 * print_dlistint - prints all  elements of dlistint_t list
 * @head: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
	       	printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}
