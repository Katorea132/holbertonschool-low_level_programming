#include "holberton.h"

/**
 * print_times_table - prints times table
 * @n: holds the times
 * Return: none
 */
void print_times_table(int n)
{
	int x, y, mult, one, ten, hund;

	a = 0;
	if (n >= 0 && n <= 15)
	{
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				c = a * b;
				f = mult / 100;
				e = mult % 100 / 10;
				d = mult % 10;
				if (f == 0 && b != 0)
				{
					_putchar(' ');
					if (e == 0)
						_putchar(' ');
					else
						_putchar(e + '0');
				}
				else if (f != 0)
				{
					_putchar(f + '0');
					_putchar(e + '0');
				}
				_putchar(d + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
