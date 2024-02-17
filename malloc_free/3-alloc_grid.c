#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a two dimensional array
 * @width: array width
 * @height: array height
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, u;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (u = 0; u < width; u++)
			array[i][u] = 0;

	return (array);
}



