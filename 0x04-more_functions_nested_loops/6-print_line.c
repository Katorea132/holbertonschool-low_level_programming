#include "holberton.h"

/**
 * print_line - prints a line
 * @n: Holds the number
 * Return: none
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if ( n != 0)
		{
			_putchar('_');
		}
	}
	_putchar(' ');
}
