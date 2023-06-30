#include "main.h"
/**
  * rot13 - encode a string using rot13
  * @a: character input
  * Return: return char
  */
char *rot13(char *a)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (a[i] == input[j])
			{
				a[i] = output[j];
			}
		}
	}
	return (a);
}

