#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * variable of type char not to be used
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
