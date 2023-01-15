#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: A string to be printed between strings.
 * @n: number of strings passed to the function
 * @...: Other parameters
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	char *string;
	unsigned int i = 0;

	va_start(pa, n);
	for (; i < n; i++)
	{
		string = va_arg(pa, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
