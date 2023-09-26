#include "main.h"
/**
 */
int checkPrime(int i, int num);

int is_prime_number(int n)
{
	return checkPrime(2, n);
}
int checkPrime(int i, int num)
{
	if (num == i)
		return (0);
	else
		if (num % i == 0)
			return (1);
	else
		{
			return checkPrime(i + 1, num);
		}
}
