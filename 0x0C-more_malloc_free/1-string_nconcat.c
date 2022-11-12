#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes to concatenate with
 *
 * Return: NULL - if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[len++] = s2[i];

	str[len] = '\0';

	return (str);
}

