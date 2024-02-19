#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element in bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocated_memory;
	unsigned int u;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allocated_memory = malloc(nmemb * size);
	if (allocated_memory == NULL)
		return (NULL);
	for (u = 0; u < (nmemb * size); u++)
		allocated_memory[u] = 0;
	return (allocated_memory);
}
