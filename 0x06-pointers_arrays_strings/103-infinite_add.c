#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r) or 0 if the result cannot fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lent1 = 0, lent2 = 0, cary = 0, sum_add = 0;
	int i, j;

	while (n1[lent1] != '\0')
		lent1++;
	while (n2[lent2] != '\0')
		lent2++;

	if (lent1 >= size_r || lent2 >= size_r)
		return (0);

	i = lent1 - 1;
	j = lent2 - 1;
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0)
	{
		sum_add = cary;

		if (i >= 0)
			sum_add += n1[i] - '0';
		if (j >= 0)
			sum_add += n2[j] - '0';

		cary = sum_add / 10;
		r[size_r - 2] = sum_add % 10 + '0';

		i--;
		j--;
		size_r--;
	}

	if (cary == 1)
	{
		if (size_r == 1)
			return (0);
		r[size_r - 2] = '1';
	}
	else if (size_r >= 1)
	{
		r[size_r - 2] = '\0';
	}

	return (r + size_r - 2);
}
