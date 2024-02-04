#include "main.h"
/**
 * _memcpy - copies bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area being copied from
 * @n: numbber of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}
