#include <unistd.h>
/**
 * _putchar - writes the character c to stdouti
 * Return: On success 1.
 * @c: The character to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - write output putchar
 * Return: always 0 (success)
 */

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

