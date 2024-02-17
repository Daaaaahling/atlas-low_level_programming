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
	unsigned int i, len;


	i = 0;
	len = 0;


	if (str == NULL)
		return (NULL);

	while (str[len]
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	
	if (dup == NULL)
	return (NULL);

	while ((dup[i] = str[i]) != '\0')
	        i++;

	return (dup);
	
}
