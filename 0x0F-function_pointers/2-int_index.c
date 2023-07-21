#include "function_pointers.h"
/**
  * int_index - search for an integer
  * @array: array element
  * @size: size of element
  * @cmp: pointer to function
  * Return: index or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
