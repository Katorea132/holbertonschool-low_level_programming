#include <stdlib.h>
/**
 * _calloc - a function that allocates memory in an array using malloc
 * @nmemb: Determines the amount of sized bytes
 * @size: Determines the sizing of the bytes above
 * Return: a pointer to anything
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	int *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	s = malloc(nmemb * size);
	if (s == 0)
		return (0);
	t = s;
	for (i = 0; i < nmemb; i++)
		t[i * nmemb] = 0;
	return (s);
}
