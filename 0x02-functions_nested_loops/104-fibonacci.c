#include <stdio.h>
void print_long(double value);
/**
 * main - print fibonnaci series upto 98th term
 * Return: always zero
 */
int main(void)
{
	float i, t1 = 1, t2 = 2;
	float nextTerm = t1 + t2;

	printf("%.0f, %.0f, ", t1, t2);

	for (i = 3; i <= 98; ++i)
	{
		if (nextTerm >= 10)
			printf("%.0f", nextTerm);
		else
			printf("%.0f", nextTerm);
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
