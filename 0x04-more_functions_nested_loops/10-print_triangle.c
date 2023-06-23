#include "main.h"
/**
 * print_triangle - draw triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (spaces = 0; spaces < size - row - 1; spaces++)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes < row + 1; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}


