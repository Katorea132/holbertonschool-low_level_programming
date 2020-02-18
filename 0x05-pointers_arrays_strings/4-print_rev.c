#include "holberton.h"
/**
 * print_rev - prints in reverse order
 * @s: Holds the string
 * Return: none
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
	}
	a--;
	for (; a >= 0; a--)
	{

		_putchar(s[a]);
	}
	_putchar('\n');
}
