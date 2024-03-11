#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to get from one
 * number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int changed_bits = n ^ m;
	unsigned int flips_needed = 0;

	while (changed_bits)
	{
		changed_bits &= (changed_bits - 1);
		flips_needed++;
	}

	return (flips_needed);
}
