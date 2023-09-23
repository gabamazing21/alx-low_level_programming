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

			if (multiples >= 10)
			{
				_putchar('0' + multiples / 10);
				_putchar('0' + multiples % 10);
			}
			else
			{
				if (j != 0) /* Don't print leading space for first column */
				{
					_putchar(' '); /* Print a space before single digit */
							  /*numbers, except for the first column */
				}
				_putchar('0' + multiples);
			}
			if (j != 9) /* Don't print comma and space after the last column */
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
