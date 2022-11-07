#include "main.h"
#include <stdio.h>

int helper_palindrome(char *s, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Returns if a string is a palindrome
 * @s: An input string
 *
 * Return: 1 if string is a palindrome or 0 if otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);

	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - Function with a reversed string
 * @s: String value to be checked
 * @len: Length of string s
 *
 * Return: Reverse string
 */
int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);
}

/**
 * _strlen_recursion - Function that obtains the length of a string
 * @s: An input string
 *
 * Return: Length of string s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
