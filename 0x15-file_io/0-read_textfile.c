#include "main.h"
/**
 * read_textfile - read text file
 * @filename: filename
 * @letters: letter it should print
 * Return: number of the content
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *ch;

	if (filename == NULL)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(ch);
		return (0);
	}
	rd = read(fd, ch, letters);
	if (rd == -1)
	{
		free(ch);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, ch, rd);
	if (wr == -1 || wr != rd)
	{
		free(ch);
		close(fd);
		return (0);
	}
	close(fd);
	free(ch);
	return (wr);
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
