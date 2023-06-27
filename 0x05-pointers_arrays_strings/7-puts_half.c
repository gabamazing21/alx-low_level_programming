#include "main.h"
/**
 * puts_half - print half of the the string
 * @str: input string
 */

void puts_half(char *str)
{
	int i;
	int len = _strlen(str);
	int half;

	if (len % 2 == 0)
	{
		for (half = len / 2; half < len; half++)
		{
			_putchar(str[half]);
		}

	}
	else
	{
		for (half = len / 2; half < len; half++)
		{
			_putchar(str[half]);
		}
		i = (len - 1) / 2;
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - it return string lengh
 * @s: strings to get it's length
 * Return: it return lenght
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
