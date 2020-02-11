#include "holberton.h"

/**
 * print_times_table - prints times table
 * @n: holds the times
 * Return: none
 */
void print_times_table(int n)
{
	int a, b, c, one, ten, hund;

	a = 0;
	if (n >= 0 && n <= 15)
	{
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				c = a * b;
				one = c % 10;
				ten = c % 100 / 10;
				hund = c / 100;
				if (hund == 0 && b != 0)
				{
					_putchar(' ');
					if (ten == 0)
						_putchar(' ');
					else
						_putchar(ten + '0');
				}
				else if (hund != 0)
				{
					_putchar(hund + '0');
					_putchar(ten + '0');
				}
				_putchar(one + '0');
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
