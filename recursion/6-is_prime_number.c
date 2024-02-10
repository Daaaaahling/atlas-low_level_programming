#include "main.h"
/**
 * is_prime_number - confirms inputted number is prime
 * @n: inputted number
 * Return: 1 if it is prime, 0 if it is not
 */

int is_prime_number(int u)
{
	if (u == 0 || u == 1)
		return (0);
	else
		return (prime_helper(u, 2));
}
int sum(int u)
{
	if (u > 0)
	{
		return u + sum(u - 1);
	}
	else
	{
		return (0);
	}
}


