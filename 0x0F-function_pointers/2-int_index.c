#include "function_pointers.h"
/**
 * int_index - seach for integer index
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
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
		else
			return (-1);
	}
	return (0);
}
