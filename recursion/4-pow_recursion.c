#include "main.h"
/**
 *  _pow_recursion - recursively prints number to the power of another number
 *  @x: base int 
 *  @y: power int
 *  Return: the power of a number to a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
