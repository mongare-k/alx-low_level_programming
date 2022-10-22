#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0- 14,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x, y = 0;

	for (; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
