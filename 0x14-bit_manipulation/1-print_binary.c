#include "holberton.h"
/**
 * rev_put - prints in reverse
 * @n: Holds the transformed number
 * Return: none
 */
void rev_put(unsigned long int n)
{
	if (n == 0)
		return;
	rev_put(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - Prints a binary representation of number
 * @n: Holds such number
 * Return: none
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		rev_put(n);
	}
}
