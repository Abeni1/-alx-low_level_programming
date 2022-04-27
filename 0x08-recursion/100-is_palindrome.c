#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to string.
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * _pal - palindrome
 * @s: pointer to string
 * @p: position
 * Return: integer
 */

int _pal(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}

	if (*s == *(s + p))
	{
		return (_pal(p + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int str_len = _strlen_recursion(s);

	return (_pal(s, str_len - 1));
}
