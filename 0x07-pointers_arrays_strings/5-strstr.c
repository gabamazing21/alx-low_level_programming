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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			if(haystack[i + j] == '\0')
				return (0);
	}
	return (0);
}
