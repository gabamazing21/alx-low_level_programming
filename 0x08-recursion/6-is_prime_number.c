#include "main.h"
int is_prime_helper(int n, int div);
/**
  * is_prime_number - check if it's prime
  * @n: argument value
  * Return: 1 or 0
  */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
  * is_prime_helper - help to get prime
  * @n: number to checl
  * @div: divisor
  * Return: return ans
  */

int is_prime_helper(int n, int div)
{
	if (n < 2)
		return (0);
	if (div == n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}
