#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: Holds the string to be copied
 * Return: a pointer to a char
 */
char *_strdup(char *str)
{
	char *strc;
	int i;

	if (str == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
	{
	}
	strc = malloc((sizeof(char) * 1) + i);
	if (strc == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
		strc[i] = str[i];
	strc[i] = 0;
	return (strc);
}
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
	new->name = _strdup(name);
	if (new->name == 0)
	{
		free(new);
		return (0);
	}
	new->owner = _strdup(owner);
	if (new->owner == 0)
	{
		free(new->name);
		free(new);
		return (0);
	}
	new->age = age;
	return (new);
}
