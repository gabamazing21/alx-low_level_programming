#include <stdio.h>
void print_long(double value);
/**
 * main - print fibonnaci series upto 98th term
 * Return: always zero
 */
int main(void)
{
	double i, t1 = 1, t2 = 2;
	double nextTerm = t1 + t2;

	printf("%f, %f, ", t1, t2);

	for (i = 3; i <= 98; ++i)
	{
		if (nextTerm >= 10)
			printf("%f", nextTerm);
		else
			printf("%f", nextTerm);
		if (i != 98)
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
