#include "main.h"
/**
 * factorial - return factorial of a given number;
 * @n: number
 * Return: results
 */
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
