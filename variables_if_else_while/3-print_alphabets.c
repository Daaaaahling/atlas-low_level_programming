#include <stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z' ; n++)
		putchar(n);

	for (n = 'A'; n <= 'Z' ; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
