#include <stdlib.h>
/**
 * array_iterator - Iterates an array
 * @array: Holds the array
 * @size: Holds the size
 * @action: Holds the function that'll perform the action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && action != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
