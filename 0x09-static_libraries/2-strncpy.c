#include "main.h"
int _strlen(char *s);
/**
  * _strncpy - it merge two string together
  * @src: source
  * @dest: destination
  * @n: at most byte
  * Return: it return destination array character
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
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
