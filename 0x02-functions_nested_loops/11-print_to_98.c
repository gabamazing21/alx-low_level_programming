#include "main.h"
/**
 * print_to_98 - print natural number to 98
 * @n: from n
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d ,", i);
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d ,", i);
		}
		printf("%d\n", 98);

	}
	else if (n == 98)
	{
		printf("%d\n", 98);
	}
	else
		printf("Enter valid number");
}
