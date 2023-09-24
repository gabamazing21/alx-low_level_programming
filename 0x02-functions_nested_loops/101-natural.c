#include "main.h"
/**
 * sum_mul_to_1024 - sum multiples of 3 and 5 to 1024
 */
void sum_mul_to_1024(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
/**
 * main - main
 * Return: return 0
 */
int main(void)
{
	sum_mul_to_1024();
	return (0);
}
