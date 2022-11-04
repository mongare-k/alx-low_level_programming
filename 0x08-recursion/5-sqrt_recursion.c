#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the value of square root of n.
 * @n: an input integer
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - Calculates square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	if (n > i)
		return (-1);
	else if (n * n == i)
		return (n);
	return (_sqrt(n + 1, i));
}
