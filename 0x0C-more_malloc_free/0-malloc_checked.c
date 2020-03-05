#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Recieves the amount of space to be assignes
 * Return: a pointer to anything
 */
void *malloc_checked(unsigned int b)
{
	void *s;
	
	s = malloc(b);
	if (s == 0)
	{
		exit(98);
	}
	return (s);
}
