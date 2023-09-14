#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - object for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog oject which has name, age, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
