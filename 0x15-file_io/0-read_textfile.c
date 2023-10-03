#include "main.h"
/**
 * read_textfile - read text file
 * @filename: filename
 * @letters: letter it should print
 * Return: number of the content
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *ch;
	size_t n = 0;

	ch = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	rd = read(fd, ch, letters);
	if (rd == -1)
		return (0);

	for (n = 0; ch[n] != '\0'; n++)
	{
		_putchar(ch[n]);

	}
	return (n);
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