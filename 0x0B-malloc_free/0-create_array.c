#include <stdlib.h>
/**
 * create_array - creates an array of a given number of bytes
 * @size: Holds the size of the array
 * @c: Holds the letter
 * Return: a pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}
	ar = malloc(size * (sizeof(char)));
	if (ar == 0)
	{
		return (0);
	}
	for (; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}



