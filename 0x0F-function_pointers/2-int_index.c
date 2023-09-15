#include "function_pointers.h"
/**
 * int_index - seach for integer index
 * @array: point to array of element to work with
 * @size: number of  element in an array
 * @cmp: pointer to the function to be used to compare values
 * Return: it return index of the first element for which cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
