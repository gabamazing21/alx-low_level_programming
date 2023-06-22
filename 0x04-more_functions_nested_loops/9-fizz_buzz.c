#include "main.h"
/**
 * main - print FizzBuszz
 */
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			_putchar ('F');
			_putchar ('i');
			_putchar ('z');
			_putchar ('z');
		}
		else if (n % 5 == 0)
		{
			_putchar ('B');
			_putchar ('u');
			_putchar ('z');
			_putchar ('z');
		}
		else
		{
			print_number(n);
		}
		_putchar (' ');
	}
	return (0);
}
