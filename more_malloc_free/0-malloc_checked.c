#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: number of bytes to allocate memory
 * Return: pointer to allocated memory
 * The malloc_checked function should cause normal process
 * termination with a status value of 98, if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
