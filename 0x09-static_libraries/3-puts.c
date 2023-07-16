#include "main.h"
/**
 * _puts - it print strings
 * @str: strings to be print out
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
