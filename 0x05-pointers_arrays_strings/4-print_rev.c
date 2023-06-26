#include "main.h"
/**
 * print_rev - to write string in reverse
 * @s: character to print
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
/**
  * _strlen - get length of string
  * @s: character to check
  * Return: it return length
  */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;

	}
	return (length);
}
