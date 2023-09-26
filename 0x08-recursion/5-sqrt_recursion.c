#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number
 * Return: results
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - iterate to get square root
 * @n: number
 * @i: 1;
 * Return: return results;
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

