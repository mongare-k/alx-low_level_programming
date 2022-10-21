#include <stdio.h>

/**
 * main - Prints the sum of even valued fibonacci sequence
 * terms not exceeding 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	long int fibonacci[50], sum = 2;

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (x = 2; x < 50; x++)
	{
		fibonacci[x] = fibonacci[x - 1] + fibonacci[x - 2];
		if ((fibonacci[x] % 2) == 0 && fibonacci[x] < 4000000)
			sum += fibonacci[x];
	}
	printf("%ld\n", sum);

	return (0);
}
