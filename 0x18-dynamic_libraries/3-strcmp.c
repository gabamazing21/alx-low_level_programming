#include "main.h"
/**
  * _strcmp - it compare strings lexicology
  * @s1: string input1
  * @s2: string input2
  * Return:ascii different
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (s1[i] - s2[i]);
}
