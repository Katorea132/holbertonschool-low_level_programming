#include "holberton.h"

/**
 * jack_bauer - this prints all his minutes
 * Return: void
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 24; a++)
	{
		b = 0;
		for (; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}