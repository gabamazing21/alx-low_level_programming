#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - print sum of two diagonal
  * @a: array of element
  * @size: array_cp
  */
void print_diagsums(int *a, int size)
{
	int i, suma = 0, sumb = 0;

	for (i = 0; i < size; i++)
	{
		suma += a[(size + 1) * i];
	}
	for (i = 0; i < size; i++)
	{
		sumb += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
