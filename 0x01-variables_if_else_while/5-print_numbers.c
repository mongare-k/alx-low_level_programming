#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: Always 0 (Success)
 */

 int main(void)
 {
	 int b;

	 for (b = 0; b < 10; b++)
		 printf("%d", b);
	 printf("\n");

	 return (0);
}
