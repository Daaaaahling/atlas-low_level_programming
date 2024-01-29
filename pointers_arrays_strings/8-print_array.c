#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,then new line
 * @a: input
 * @n: input
 * Return: 0
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
