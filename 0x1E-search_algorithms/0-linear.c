/**
 * linear_search - linear search of n
 * @array: array
 * @size: size of array
 * @value: value
 * Return: value or -1 if success or failure
 */

#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
