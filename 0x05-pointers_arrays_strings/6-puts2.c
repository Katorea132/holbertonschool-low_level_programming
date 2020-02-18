#include "holberton.h"
/**
 * puts2 - puts every other character
 * @str: Holds the string
 * Return: none
 */
void puts2(char *str)
{
	int a, b;

	for (a = 0; str[a] != 0; a++)
	{
	}
	for (b = 0; b < a; b++)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
