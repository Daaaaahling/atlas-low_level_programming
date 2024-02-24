#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for integers in array
 * @array: array to search
 * @size: size of array
 * @cmp: pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		
		for (u = 0; u < size; u++)
			if (cmp(array[u]) != 0)
				return (u);
	}
	return (-1);
}

