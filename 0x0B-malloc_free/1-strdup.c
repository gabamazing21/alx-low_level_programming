#include "main.h"
int _strlen(char *s);
/**
 * _strdup - return pointer to newly allocated memory
 * that contain copy of a given string
 * @str: string
 * Return: pointer to the new location
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	len = _strlen(str);
	s = malloc(sizeof(char) * len);
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
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
