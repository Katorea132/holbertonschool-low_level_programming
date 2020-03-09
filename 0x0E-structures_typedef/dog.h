#ifndef DOG
#define DOG
/**
 * struct dog - Holds info about the best of boyes
 * @name: Name of the gut boi
 * @age: Age of the best of boyes
 * @owner: Noone cares tho
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
