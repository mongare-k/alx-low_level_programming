#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter on
 * each array element.
 * @array: Pointer to an array
 * @size: Size of array
 * @action: Pointer to function used
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
