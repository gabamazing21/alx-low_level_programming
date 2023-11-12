#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * main - copy content in file 1 to file 2
 * @argc: arg count
 * @argv: point to arguement
 * Return: 0 if sucess§
 */
int main(int argc, char *argv[])
{
	int fdto, fdfrom, byte_read;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		fprintf(stderr, "Error: Can't read from  %s\n", argv[1]);
		exit(98);
	}
	if (fdto == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((byte_read = read(fdfrom, buffer, sizeof(buffer))) > 0)
		if (dprintf(fdto, "%.*s", (int)byte_read, buffer) < 0)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (close(fdto) == -1)
	{
		fprintf(stderr, "can't close fd %d", fdto);
		exit(100);
	}
	if (close(fdfrom) == -1)
	{
		fprintf(stderr, "can't close fd %d", fdfrom);
		exit(100);
	}
	close(fdto);
	close(fdfrom);
	return (0);
}

