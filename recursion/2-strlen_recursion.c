#include "main.h"
/**
 *  _strlen_recursion - returns length of a string
 *  @s: pointer to string
 *  Return: length of str
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}

