#include "function_pointers.h"
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == 0 || action == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
}
