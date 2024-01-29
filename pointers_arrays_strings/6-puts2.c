#include "main.h"
/**
 * puts2 - prints every other charac of a string including first, then new line
 *
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
