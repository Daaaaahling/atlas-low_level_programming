#include "main.h"
/**
 * _strncat - concatenates two strings at n bytes
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
