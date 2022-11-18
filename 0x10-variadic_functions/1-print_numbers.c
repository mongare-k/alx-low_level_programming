#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: Number of integers passed to the function
 * @...: Other parameters
 *
 * Return: All parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(pa, n);

		while (i < n)
		{
			printf("%d", va_arg(pa, int));

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(pa);
	}
	printf("\n");
}
