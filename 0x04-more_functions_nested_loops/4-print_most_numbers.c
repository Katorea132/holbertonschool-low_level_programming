#include "holberton.h"

/**
 * print_most_numbers - This will print from 0 to 9 but 2 and 4
 * Return: none
 */
void print_most_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		if (!(a == '2' || a == '4'))
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
