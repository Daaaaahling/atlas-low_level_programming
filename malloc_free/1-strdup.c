#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates string to newly allocated space in memory
 * @str: string to duplicate
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *original_str)
{
	char *dup;
	unsigned int i, len = 0;


	i = 0;
	len = 0;


	if (original_str == NULL)
		return (NULL);

	while (original_str[len] != '\0')
		len++;

	dup = (char *)malloc((sizeof(char) * len) + 1);

	if (dup == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = original_str[i];

	dup[len] = '\0';

       	return (dup);
}
