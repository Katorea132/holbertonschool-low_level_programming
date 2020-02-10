#include "holberton.h"

/**
 * print_alphabet_x10 - This will print 10 times the ABC
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		b = 'a';
		for (; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
