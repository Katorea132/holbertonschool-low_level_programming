#include <stdlib.h>
/**
 * array_range - creates an array of integers, containing both mi nand max
 * @min: Holds the minimum value to be included
 * @max: Holds the maximun value included
 * Return: a pointer to an integer
 */
int *array_range(int min, int max)
{
	int *i;
	int num;
	
	if (min > max)
	{
		return (0);
	}
	i = malloc(sizeof(int) * num);
	if (i == 0)
	{
		return (0);
	}
}
