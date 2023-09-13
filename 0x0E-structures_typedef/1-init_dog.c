#include "dog.h"
/**
 * init_dog - initialize dog struct
 * @d: pointer to d address
 * @name: point to name of dog
 * @age: pointer to age of dog
 * @owner: pointer to owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
