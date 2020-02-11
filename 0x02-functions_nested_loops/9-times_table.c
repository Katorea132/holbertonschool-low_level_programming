#include "holberton.h"
/**
 * times_table - this will print the 9 table
 * Return: none
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		for (; b <= 9; b++)
		{
			c = a * b;
			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (!(b == 9))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
