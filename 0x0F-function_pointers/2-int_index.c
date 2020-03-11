/**
 * int_index - Searches for an integer
 * @array: Holds the array
 * @size: Holds the size
 * @cmp: Holds the function
 * Return: Returns -1 if something isn't or the index if it is
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (cmp != 0 && size > 0 && array != 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
