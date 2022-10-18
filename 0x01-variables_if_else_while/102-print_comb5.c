#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Program that prints all possible combinations of two two-digit
 * numbers,
 * should range from 0 - 99
 * separated by a space
 * The combination of numbers should be separated by a comma followed by a
 * space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

