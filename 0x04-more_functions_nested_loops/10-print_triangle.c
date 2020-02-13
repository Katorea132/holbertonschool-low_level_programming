#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: gets the size of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c = 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = 0;
			for (; b <= size; b++)
			{
				if (b > (size - c))
				{
					_putchar('#');
				}
				else if (b < (size - c))
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
