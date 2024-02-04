#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept:acceptable bytes
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *acceptPtr = accept;

		while (*acceptPtr != '\0')
		{
			if (*s == *acceptPtr)
			{
				break;
			}
			acceptPtr++;
		}

		if (*acceptPtr == '\0')
		{
			return (count);
		}

		count++;
		s++;
	}

	return (count);
}
