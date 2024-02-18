#include "main.h"

/**
 * malloc_checked - uses malloc to allocate memory
 * @b: number of bytes to allocate memory
 * Return: pointer to allocated memory
 *
 */
void *malloc_checked(unsigned int u)
{
	void *ptr;

	ptr = malloc(u);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
