#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary representation of number
 * @n: number to print as binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar((n % 2) + '0');
}