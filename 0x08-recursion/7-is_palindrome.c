#include "holberton.h"
/**
 * swap_test - tests each value of the string
 * @b: Holds the lenght of the string
 * @c: Holds the pointer to the initial value
 * Return: 1 or 0 depending
 */
int swap_test(int b, int c, char *d)
{
	if (c >= b)
	{
		return (1);
	}
	else if (d[b] == d[c])
	{
		return (swap_test(b - 1, c + 1, d));
	}
	return (0);
}

/**
 * is_palindrome - Checks if the string is a palindrome
 * @s: Holds the string
 * Return: 1 or 0 depending if it is or not
 */
int is_palindrome(char *s)
{
	return (_strlen_recursion(s - 1), 0, s));
}
