#include "search_algos.h"

/**
 * binary_search - Binary searches in an ordered array
 * @array: The array
 * @size: Size of the array
 * @value: Value to look for
 * Return: Index or -1 if not found or invalid array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, l = 0, h = size - 1, i;

	if (array)
	{
		for (m = (l + h) / 2; l != h; m = (l + h) / 2)
		{
			printf("Searching in array: ");
			for (i = l; i <= h; i++)
			{
				if (i < h)
					printf("%d, ", array[i]);
				else
					printf("%d\n", array[i]);
			}
			if (array[m] == value)
				return (m);
			else if (array[m] > value)
				h = m - 1;
			else
				l = m + 1;
		}
		printf("Searching in array: %d\n", array[m]);
		if (array[m] == value)
			return (m);
	}
	return (-1);
}
