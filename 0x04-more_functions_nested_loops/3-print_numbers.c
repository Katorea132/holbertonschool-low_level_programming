#include "holberton.h"

/**
 * print_numbers - prints numbers
 * Return: none
 */
void print_numbers(void)
{
	int a = '0';

	for (;a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
