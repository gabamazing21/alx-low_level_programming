#include "main.h"
int _strlen(char *s);
/**
 * create_file - create file
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "\0";
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 777);
	if (fd == -1)
	{
		return (-1);
	}
	wr = write(fd, text_content, _strlen(text_content));
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
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
