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

	if (size < 1)
		return (-1);

	if (cmp != 0)
	{
		if (array == 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cpm(array[i]))
				return (i);
	}
	return (-1);
}
