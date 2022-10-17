#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combination of single-digit no's,
 * must be separated by , followed by a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
