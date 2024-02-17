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


	if (str == NULL)
		return (NULL);

	while (original_str[len] != '\0')
		len++;

	duplicate_str = (char *)malloc((sizeof(char) * len) + 1);
	
	if (duplicate_str == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
		duplicate_str[i] = original_str[i];

	duplicate_str[len] = '\0';

       	return duplicate_str;
}
