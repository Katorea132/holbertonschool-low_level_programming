#include "search_algos.h"

/**
 * linear_search - searchs linearly through an array
 * @array: Array
 * @size: Size of the array
 * @value: Value to look for
 * Return: Index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
