#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int u;
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (u = 0; u < n; u++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (u < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
