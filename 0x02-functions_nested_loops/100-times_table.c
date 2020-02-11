#include "holberton.h"

/**
 * print_times_table - prints times table
 * @n: holds the times
 * Return: none
 */
void print_times_table(int n)
{
	int a, b, c, uni, dec, cen;

	a = 0;
	if (n >= 0 && n <= 15)
	{
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				c = a * b;
				uni = c % 10;
				dec = c % 100 / 10;
				cen = c / 100;
				if (cen == 0 && b != 0)
				{
					_putchar(' ');
					if (dec == 0)
						_putchar(' ');
					else
						_putchar(dec + '0');
				}
				else if (cen != 0)
				{
					_putchar(cen + '0');
					_putchar(dec + '0');
				}
				_putchar(uni + '0');
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
