#include "main.h"
/**
  * *_memcpy - copy src to dst"
  * @dest: memory dst
  * @src: memory src
  * @n: number of time
  * Return: char pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
