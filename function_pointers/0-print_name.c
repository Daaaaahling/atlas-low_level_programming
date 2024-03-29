#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: printed name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
