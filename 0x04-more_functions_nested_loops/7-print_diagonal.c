#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of slight line to produce
 */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			_putchar ('\n');
			for (s = 0; s < l; s++)
			{
				_putchar (' ');
			}
		_putchar ('\\');
		}
	}
}
