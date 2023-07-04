#include "main.h"
/**
  * *_strchr - locate a character
  * @s: array to check
  * @c: locate at c
  * Return: 0 if null
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == c)
			return (&s[i]);

	return (0);
}
