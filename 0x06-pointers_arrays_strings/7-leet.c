#include "main.h"
/**
  * leet - encode string into 1337
  * @a: array
  */
char *leet(char *a)
{
	int i,j;
	char *code = "4433007711";
	char *letter = "aAeEoOtTlL";
	
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if ( a[i] == letter[j])
			{
				a[i] = code[j] ; 
				break;
			}

		}
	}
	return (a);
}
