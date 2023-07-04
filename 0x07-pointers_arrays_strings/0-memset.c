#include "main.h"
/**
  * *_memset - it fills memory with constant byte
  * @s: array pointer
  * @b: charaacter
  * @n: number of time
  * Return: return s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

