#include "main.h"
/**
  * reverse_array - it reverse order in an arrray
  * @a: arrayi
  * @n: number of element in any array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
