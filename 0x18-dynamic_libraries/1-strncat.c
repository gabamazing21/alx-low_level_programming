#include "main.h"
/**
  * _strncat - it merge two string together
  * @src: source
  * @dest: destination
  * @n: at most byte
  * Return: it return destination array character
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest = _strlen(dest);

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
