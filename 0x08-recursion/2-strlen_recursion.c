#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: String to count
 *
 *Return: Length of tthe string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
