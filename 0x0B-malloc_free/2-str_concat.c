#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		s[j++] = s2[i];

	return (s);
}
