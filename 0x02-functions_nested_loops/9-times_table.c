#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, multiples;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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

