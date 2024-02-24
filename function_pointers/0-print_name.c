#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: printed name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		f(name);
}
