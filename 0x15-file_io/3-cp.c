#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
int _putchar(char c);
/**
 * main - copy content in file to file 2
 * @argc: arg count
 * @argv: point to arguement
 * Return: 0 if sucess§
 */
int main(int argc, char *argv[])
{
	int fdto, fdfrom;
	ssize_t byte_read;
	char buffer[1024];

	if (argc < 2)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdto = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		close(fdto);
		exit(98);
	}
	while ((byte_read = read(fdfrom, buffer, sizeof(buffer))) > 0)
	{
		dprintf(fdto, "%s", buffer);
	}
	if (byte_read == -1)
	{
		fprintf(stderr, "can't write to %s", argv[2]);
		exit(1);
	}
	if (close(fdto) == -1)
	{
		fprintf(stderr, "can't close %d", fdto);
		exit(100);
	}
	if (close(fdfrom) == -1)
	{
		fprintf(stderr, "can't close %d", fdfrom);
		exit(100);
	}
	close(fdto);
	close(fdfrom);
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
