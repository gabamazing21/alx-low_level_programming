#include "main.h"
int _strlen(char *s);
/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 * Return: 1 if it's success -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, fd;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	fd = open(filename, O_APPEND | O_RDWR, 0600);
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
