#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *dog;
	d= &dog;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

}
