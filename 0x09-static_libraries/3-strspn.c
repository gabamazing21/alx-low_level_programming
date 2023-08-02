#include "main.h"
/**
  * _strspn - get length of prefix
  * @s: src to compar
  * @accept: src to check
  * Return: return point i
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found != 1)
			break;
	}
	return (i);
}
