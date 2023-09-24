#include "main.h"
/**
 * print_number - print int using char
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_long(n);
	else if ((n > 0) && (n < 10))
	{
		_putchar('0' + n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
}
/**
 * print_long - print int with putchar
 * @value: int
 */
void print_long(int value)
{
	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}
