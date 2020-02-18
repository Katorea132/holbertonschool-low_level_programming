#include "holberton.h"
/**
 * _puts - puts a string on screen
 * @str: Holds the string to put
 * Return: none
 */
void _puts(char  *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
