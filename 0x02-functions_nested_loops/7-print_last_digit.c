#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: parameter to check
 * Return: return n
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
	{
		digit = digit * (-1);
	}
	_putchar(digit + '0');
	return (digit);
}

