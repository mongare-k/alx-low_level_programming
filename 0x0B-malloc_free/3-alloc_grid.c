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
	int m, n;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		array[m] = malloc(sizeof(int) * width);

		if (array[m] == NULL)
		{
			for (; m >= 0; m--)
				free(array[m]);

			free(array);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			array[m][n] = 0;
	}

	return (array);
}
