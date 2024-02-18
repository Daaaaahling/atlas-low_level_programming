#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: number of bytes to allocate memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
