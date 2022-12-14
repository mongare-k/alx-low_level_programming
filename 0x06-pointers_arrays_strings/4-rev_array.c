#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
