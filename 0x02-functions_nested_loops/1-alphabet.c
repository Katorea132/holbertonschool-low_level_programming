#include "holberton.h"

/**
 * print_alphabet - this will print the
 * lowercase ABC through the function _putchar
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
