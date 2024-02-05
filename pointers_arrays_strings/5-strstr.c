#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
