#include "search_algos.h"
void printarray(size_t low, size_t high, int *array);

/**
 * binary_search - do binary search
 * @array: array of element
 * @size: size of array
 * @value: value searching for
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size - 1;
	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printarray(low, high, array);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * printarray - print array at start and stop index
 * @low: starting index
 * @high: max index
 * @array: array
 */

void printarray(size_t low, size_t high, int *array)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
