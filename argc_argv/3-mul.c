#include <stdio.h>
#include <stdlib.h>
/**
 * main - two numbers multiplied
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	if (argc == 3 && sscanf(argv[1], "%d", &num1) == 1 && sscanf(argv[2], "%d", &num2) == 1)
	{
		printf("%d\n", num1 * num2);
		reurn (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
