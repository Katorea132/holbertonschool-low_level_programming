#include "holberton.h"
/**
 * get_bit - Gets the value of a bit
 * @n: Holds the number
 * @index: Holds the position
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	return (n & 1);
}
