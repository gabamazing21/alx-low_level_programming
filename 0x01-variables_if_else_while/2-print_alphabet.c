#include <stdio.h>
/**
 * main - printing small alphabet letter
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
