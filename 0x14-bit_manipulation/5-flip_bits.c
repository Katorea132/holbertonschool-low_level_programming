#include "holberton.h"
/**
 * flip_bits - Counts how many bits need a flip
 * @n: Holds number 1
 * @m: Holds number 2;
 * Return: amount of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, holder;

	holder = n ^ m;
	for (i = 0; holder != 0; holder >>= 1)
		if ((holder & 1) == 1)
			i++;
	return (i);
}
