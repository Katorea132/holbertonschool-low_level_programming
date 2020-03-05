#include <stdlib.h>
/**
 * _realloc - Reallocates memory
 * @ptr: Holds the previous address
 * @old_size: Holds the old size
 * @new_size: Holds the new size
 * Return: a void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nesp;
	char *hold;
	char *place;
	unsigned int i;


	if (ptr != 0 && new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
		return (ptr);
	nesp = malloc(new_size);
	if (nesp == 0)
		return (0);
	if (ptr == 0)
		return (nesp);
	hold = ptr;
	place = nesp;
	for (i = 0; i < old_size && i < new_size; i++)
		place[i] = hold[i];
	free(ptr);
	return (nesp);
}
