#include "main.h"

/**
 * print_alphabet - printing small alphabet letter
 * using _putchar
 * Return: always 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
