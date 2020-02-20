#include "holberton.h"

/**
 * print_number - prints a number
 * @n: stores the given number
 * Return: none
 */
void print_number(int n)
{
	unsigned int a;

	a = n;
	if (n < 0)
	{
		a = -a;
		_putchar('-');
	}
	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
