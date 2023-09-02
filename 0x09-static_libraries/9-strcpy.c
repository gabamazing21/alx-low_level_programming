#include "main.h"
/**
 * *_strcpy - copy array from src to dest
 * @dest: input parameter destination
 * @src: input parameter src
 * Return: it return dest array;
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
