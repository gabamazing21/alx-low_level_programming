#include "main.h"
/**
 * print_number - print int using char
 * @n: integer to print
 */
void print_number(int n)
{
	char lastDigit;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(lastDigit);
}
