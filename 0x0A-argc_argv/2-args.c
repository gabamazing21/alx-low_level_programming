#include "main.h"
/**
 * main - print argument line by line
 * @argc: argument counts
 * @argv: argument value
 * Return: always zero
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
