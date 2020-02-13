#include "holberton.h"

/**
 * print_diagonal - prints a diagonal
 * @n: Gets the number
 * Return: none
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		if (!(n <= 0))
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
