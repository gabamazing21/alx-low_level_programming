#include "main.h"
/**
 * main - print argument count
 * @argc: argument count
 * @argv: argument value
 * Return: always zero
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
