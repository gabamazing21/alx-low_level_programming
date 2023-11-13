#include "main.h"
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
