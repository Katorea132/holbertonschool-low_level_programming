#include "holberton.h"
/**
 * set_bit - Sets a bit
 * @n: Holds a pointer to a number
 * @index: Holds the position of the bit to set
 * Return: 1 if good -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);
	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
