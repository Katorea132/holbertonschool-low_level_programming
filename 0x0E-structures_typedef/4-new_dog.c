#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Copies name of best boi and the noonecares
 * @name: Holds the name of the best boya
 * @age: Holds the age of the goodest boi
 * @owner: Noonecares
 * Return: a pointer to a struck
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == 0)
		return (0);
	new->name = name;
	if (new->name == 0)
		return (0);
	new->owner = owner;
	if (new->owner == 0)
		return (0);
	new->age = age;
	return (new);
}
