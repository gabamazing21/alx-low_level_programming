#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: integer to print it's sign
 * Return: sign;
 */

int print_sign(int n)
{
	int result;
	char symbol;

	if (n > 0)
	{
		result = 1;
		symbol = '+';
	}
	else if (n == 0)
	{
		result = 0;
		symbol = '0';
	}
	else
	{
		result = -1;
		symbol = '-';
	}
	_putchar(symbol);
	return (result);
}
