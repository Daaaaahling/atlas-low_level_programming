#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes array function
 * @array: pointer to array
 * @size: array size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (!array || !action)
		return;

	for (u = 0; u < size; u++)
		action(array[u]);
}
