#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates a string to another 
 * @s1: string to concatenate to 
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: a pointer to newly allocated concatenated string, on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (!result)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	while (i < (len1 + n) && s2[j])
		result[i++] = s2[j++];
	
	result[i] = '\0';

	return result;
}
