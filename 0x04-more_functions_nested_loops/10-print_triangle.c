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
	for (row = 0; row < size; row++)
	{
		for (spaces = 0; spaces <= size - row; spaces++)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}


