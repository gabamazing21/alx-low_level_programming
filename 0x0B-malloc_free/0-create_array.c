#include "main.h"
/**
 * create_array - create array of char, initialize
 * with specific characters
 * @size: size of array
 * @c: char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	else
		return (NULL);
}
