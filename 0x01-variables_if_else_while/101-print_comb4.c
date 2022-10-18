#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Program that prints all possible different combinations of three
 * digits
 * separated by , and followed by a space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (b = '1'; b < '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != '7' || b != '8' || c != '9')
					{

					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
