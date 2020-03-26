#include "holberton.h"
/**
 * binary_to_uint - Makes an unsigned integer out of a binary string
 * @b: Holds the string
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, pow, sum;

	if (b)
	{
		for (pow = 0; b[pow] != 0; pow++)
			if (b[pow] < 48 || b[pow] > 57)
				return (0);
		for (i = 0, sum = 0, pow -= 1; b[i] != 0; pow--, i++)
			sum += ((b[i] - '0') << pow);
		return (sum);
	}
	return (0);
}
