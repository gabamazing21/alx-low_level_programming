#include "main.h"
/**
  * *_strstr - locate substring
  * @haystack: occurence to return
  * @needle: occurrence to scan
  * Return: pointer
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return (0);
}
