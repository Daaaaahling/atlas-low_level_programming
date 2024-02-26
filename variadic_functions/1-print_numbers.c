#include "variadic_functions.h"

/**
 * print_numbers- function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int u;
	int nums;

	if (u == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (u = 0; u < n; u++)
	{
		nums = va_arg(args, int);
		if (separator == NULL)
		{
			if (u == n - 1)
				printf("%d\n", nums);
			else
				printf("%d", nums);
		}
		else
		{
			if (u == n - 1)
				printf("%d\n", nums);
			else
				printf("%d%s", nums, separator);
		}
	}
	va_end(args);
}
