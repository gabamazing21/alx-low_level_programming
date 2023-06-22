#include "main.h"
/**
 * print_square - print squares
 * @size: number of squares to print
 */
void print_square(int size)
{
	int l, b;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}

	}
}
