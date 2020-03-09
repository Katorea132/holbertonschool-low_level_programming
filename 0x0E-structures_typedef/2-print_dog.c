#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints info of the goodest boya
 * @d: Holds the struct that holds that which is sacred
 * Return: none
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name = "(nil)", d->age, d->owner ? d->owner = "(nil)");
}

