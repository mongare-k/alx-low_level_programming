#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations of two digits,
 * numbers must be separated by a , followed by a space,
 * the two digits must be different
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != '8' || n != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
