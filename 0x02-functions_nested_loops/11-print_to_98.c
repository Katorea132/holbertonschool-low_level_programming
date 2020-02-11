#include "holberton.h"
/**
 * print_to_98 - prints to 98
 * @n: This hold the number
 * Return: returns the values
 */
void print_to_98(int n)
{
	int a = n / 100;
	int b = (n / 100) / 10;
	int c = (n / 100) % 10;
	if (n > 98)
	{
		for (; n == 98; n--)
		{
			if ( n >= 100)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(c + '0');
			}
			else if ( n >= 10 && n < 100)
			{
				_putchar(b + '0');
				_putchar(c + '0');
			}
			else 
			{
				_putchar(c + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else if ( n == 98)
	{
		_putchar(n + '0');
	}
	else if ( n > 0 && n < 98)
	{
		for (; n == 98; n++)
		{
			if (n < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar(b + '0');
				_putchar(c + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n == 98; n++)
		{
			if ( n < 0)
			{
				_putchar('-');
				if ( n < -100)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(c + '0');
				}
				else if (n < -10 && n > 100)
				{
					_putchar(b + '0');
					_putchar(c + '0');
				}
				else
				{
					_putchar(c + '0');
				}
			}
			else
			{
				if ( n < 10)
				{
					_putchar(c + '0');
				}
				else
				{
					_putchar(b + '0');
					_putchar(c + '0');
				}
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
