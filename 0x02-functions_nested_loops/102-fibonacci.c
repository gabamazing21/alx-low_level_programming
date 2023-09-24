#include <stdio.h>
/**
 * main - print fibonnaci series upti 50th term
 * Return: always zero
 */
int main(void)
{
	long int i, t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;

	printf("%ld, %ld, ", t1, t2);

	for (i = 3; i <= 50; ++i)
	{
		printf("%ld", nextTerm);
		if (i != 50)
		{
			putchar(',');
			putchar(' ');
		}
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
