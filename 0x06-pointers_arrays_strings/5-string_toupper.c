#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: The string will be modified
 *
 * Return: char var
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
