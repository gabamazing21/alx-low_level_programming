#include "main.h"
#include <stdio.h>
/**
 * main - print FizzBuszz
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
		
	}
	printf("\n");
	return (0);
}
