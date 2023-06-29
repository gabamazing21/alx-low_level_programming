#include "main.h"
int _strlen(char *s);
/**
  * _strcat - it merge two string together
  * @src: source
  * @dest: destination
  * Return: it return destination array character
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int len_dest = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}

	dest[len_dest + i] = '\0';
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
