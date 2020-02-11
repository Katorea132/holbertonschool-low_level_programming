#include "holberton.h"
/**
 * print_last_digit - prints last digit
 * @n: Holds the number
 * Return: Returns value of r
 */

int print_last_digit(int n)
{
	int r;

	if (n > 0 || n == 0)
	{
		r = (n % 10);
		_putchar(r + '0');
	}
	else
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
	}
	return (r);
}
