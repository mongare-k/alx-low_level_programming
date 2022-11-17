#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Pointer to an array
 * @size: Size of array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0; -1 if no elements matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
