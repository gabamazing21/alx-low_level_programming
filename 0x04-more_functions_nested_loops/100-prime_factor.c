#include <stdio.h>
/**
 * main - print largest primefactor 612852475143
 * Return: always zero
 */
int main(void)
{
	long int maxPrime = -1;
	long int n = 612852475143, i;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	printf("%ld\n", maxPrime);
	return (0);
}
