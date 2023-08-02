#include "dog.h"
#include <string.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);
	dog_t *new_dog = malloc(sizeof(dog_t));
	if(new_go == NULL)
		return (NULL);
	int name_len = 0, owner_len = 0;
	while (name[name_len])
		name_len++;
	while (owner(owner_len))
		owner_len ++;
	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	new_dog->owner = malloc(sizeoff(char) * (owner_len + 1));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

	}
	for (int i= 0; i <= owner_len, i++)
		new_dog->owner[i] = owner[i];
	for (int i = 0; i <= name_len; i++)
		new_dog->name[i] = name_len[i];
	new_dog->age = age;
	return (new_dog);
}
