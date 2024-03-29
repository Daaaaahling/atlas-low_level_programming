#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - point that calculates
 * @argc: variable that represents number of arguments
 * @argv: variable that represents array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *u;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	u = argv[2];

	if (strcmp(u, "+") != 0
			&& strcmp(u, "-") != 0
			&& strcmp(u, "*") != 0
			&& strcmp(u, "/") != 0
			&& strcmp(u, "%") != 0)
	{
		printf("Error\n");
		return 99;
	}
	if ((strcmp(u, "/") == 0 || strcmp(u, "%") == 0) && b == 0)
	{
		printf("Error\n");
		return 100;
	}
	/**
	 * a = atoi(argv[1]);
	 * b = atoi(argv[3]);
	 * u = argv[2]
	 */
	
	result = get_op_func(u)(a, b);
	printf("%i\n", result);

	return 0;
}


