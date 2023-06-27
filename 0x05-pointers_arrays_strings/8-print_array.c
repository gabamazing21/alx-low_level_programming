#include "main.h"
#include <stdio.h>
/**
 * print_array - print element of array of integer
 * @a: input parameter
 * @n: input parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

