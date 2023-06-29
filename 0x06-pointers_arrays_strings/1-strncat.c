#include "main.h"
int _strlen(char *s);
/**
  * _strcat - it merge two string together
  * @src: source
  * @dest: destination
  * @n: at most byte
  * Return: it return destination array character
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest = _strlen(dest);

	for (i = 0; (i < n & src[i] != '\0'); i++)
	{
		dest[len_dest + i] = src[i];
	}

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
