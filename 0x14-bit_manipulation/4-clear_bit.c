#include "holberton.h"
#include "holberton.h"
/**
 * clear_bit - Clears a bit
 * @n: Holds a pointer to a number
 * @index: Holds the position of the bit to set
 * Return: 1 if good -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
