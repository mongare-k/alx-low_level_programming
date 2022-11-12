#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements
 * @nmemb: The number of  elements.
 * @size: The byte size of each array of elements.
 *
 * Return: NULL - if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	p = malloc(y);

	if (p == NULL)
		return (NULL);

	while (x < y)
	{
		p[x] = 0;
		x++;
	}

	return (p);
}
