#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int m, n, o, p;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		array[m] = malloc(sizeof(int) * width);

		if (array[m] == NULL)
		{
			for (n = m; n >= 0; n++)
			{
				free(array[n]);
			}

			free(array);
			return (NULL);
		}
	}

	for (o = 0; o < height; o++)
	{
		for (p = 0; p < width; p++)
		{
			array[o][p] = 0;
		}
	}

	return (array);
}
