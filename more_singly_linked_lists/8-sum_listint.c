#include "lists.h"

/**
 * sum_listint - Returns the sum of all data in listint_t list
 * @head: pointer to the hesd of the list
 *
 * Return: sum of all the data. If the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	int (!head)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
