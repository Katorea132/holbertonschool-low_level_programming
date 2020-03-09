#include "dog.h"
/**
 * init_dog - initialized a struct dog
 * @d: Holds the struct for the boyes
 * @name: Holds the name of the best of boyes
 * @age: Holds the age of the goodestof bois
 * @owner: Noone cares
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
