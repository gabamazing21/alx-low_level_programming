#include "main.h"

/**
 * main - printing small alphabet letter a-z 10 time
 * using _putchar
 * Return: always 0
 */

void print_alphabet_x10(void);
{
	char a;

	
	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
