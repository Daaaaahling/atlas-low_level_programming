#include "main.h"

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: number of bytes to allocate memory
 * Return: pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
