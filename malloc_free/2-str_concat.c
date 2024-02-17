#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: concatenates first string
 * @s2: concatenates second string
 * Return: On success, pointer to the new string created or NULL on error
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, u, k, l;
	char *s;

	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++);
	}
	if (s2 == NULL)
		u = 0;
	else
	{
		for (u = 0; s2[u]; u++);
	}
	k = i + u + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	
	for (l = 0; l < u; l++)
		s[l + i] = s2[l];
	s[i + u] = '\0';
	return (s);
}


