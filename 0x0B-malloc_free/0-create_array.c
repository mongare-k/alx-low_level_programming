#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @size: Size of the array
 * @c: The char that initializes the array
 *
 * Return: The array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *k;

	if (size == 0)
		return (NULL);

	k = malloc(sizeof(char) * size);

	if (k == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		k[i] = c;

	return (k);
}
