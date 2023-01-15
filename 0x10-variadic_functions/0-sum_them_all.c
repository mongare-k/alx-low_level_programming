#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 *
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(pa, n);
	for (; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);
	return (sum);
}
