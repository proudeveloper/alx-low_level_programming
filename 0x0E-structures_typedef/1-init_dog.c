#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: Address of the dog struct to initialize
 * @name: Name of the dog
 * @age: of the dog
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
