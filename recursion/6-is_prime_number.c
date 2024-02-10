#include "main.h"
/**
 * prime_helper - helper function to check if a number is prime
 * is_prime_number - confirms inputted number is prime
 * @n: inputted number
 * @i: current divisor
 * Return: 1 if prime, 0 otherwise
 */

int prime_helper(int n, int i)
{
	if (n <= 2)
		return (n == 2);

	if (n % i == 0)
		return 0;

	if (i * i > n)
		return 1;

	return prime_helper(n, i + 1);
}


