#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
		putchar('\n');

	return(0);
}
