#include "main.h"
#include <stdlib.h>

/**
 * argstostr - convert the parameters passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: If ac == 0, av == null or If function fails - NULL, otherwise - a
 * pointer to the string.
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		ch++;
		y++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
	{
		s[z] = av[x][y];
		z++;
		y++;
	}

		s[z] = '\n';

		y = 0;
		z++;
		x++;
	}

	z++;
	s[z] = '\0';
	return (s);
}
