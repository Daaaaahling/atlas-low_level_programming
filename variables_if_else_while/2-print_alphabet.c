#include <stdio.h>
/**
 * main - print the alphabet in lowercase followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z' ; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
