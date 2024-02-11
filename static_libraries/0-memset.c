#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: points to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (ptr);
}
