#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the dog
 * @d: Holds the dog to free
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
