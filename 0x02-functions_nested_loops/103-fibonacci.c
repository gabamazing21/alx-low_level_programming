#include <stdio.h>
/**
 * main - print even sum of fibonnaci series whos values not upto 4000000
 * Return: always zero
 */
int main(void)
{
	long int i, t1 = 1, t2 = 2;
	long int sum = t2;
	long int nextTerm = t1 + t2;
	for (i = 3; nextTerm <= 4000000; ++i)
	{
		if (nextTerm % 2 == 0)
		{
			sum += nextTerm;
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%ld \n",sum);
	return (0);
}
