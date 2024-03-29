#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array integers
 * @min: minimum range of stored values
 * @max: maximum range of stored values
 * Return: on success, pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	size_t size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
