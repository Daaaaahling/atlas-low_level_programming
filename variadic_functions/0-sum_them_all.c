#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum
 * @n: number of arguments
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list list;

	va_list list;

	for (i = 0; i < n; i++)
		result += va_arg(list, int);

	va_end(list);

	return result;
}

