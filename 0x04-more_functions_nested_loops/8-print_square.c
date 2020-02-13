#include "holberton.h"

/**
 * print_square - prints a square
 * @size: Gets the size of the square
 * Return: none
 */
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = 0;
			for (; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
