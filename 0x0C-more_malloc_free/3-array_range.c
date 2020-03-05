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
	int num, j;
	
	if (min > max)
	{
		return (0);
	}
	num = max - min;
	i = malloc(sizeof(int) * (num + 1));
	if (i == 0)
	{
		return (0);
	}
	for (j = 0; j <= num; j++)
		i[j] = min + j;
	return (i);
}
