#include "main.h"
/**
 * print_times_table - prints  table, starting with 0.
 * @n: times of table
 */
void print_times_table(int n)
{
	int i, j, multiples;

	if ((n < 0) || (n > 15))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multiples = i * j;

			if (multiples >= 100)
			{
				print_long(multiples);
			}
			else if ((multiples >= 10) && (multiples < 100))
			{
				_putchar(' ');
				print_long(multiples);
			}
			else
			{
				if (j != 0) /* Don't print leading space for first column */
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + multiples);
			}
			if (j != n) /* Don't print comma and space after the last column */
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
/**
 * print_long - print int using char
 * @value: int valaue
 */
void print_long(int value)
{
	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10) + '0');
	}
}
