#include "main.h"
/**
  *string_toupper - change lower letter to capital
  * @a:array
  * Return:it array
  */

char *string_toupper(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		if (a[j] >= 'a' && a[j] <= 'z')
		{
			a[j] = a[j] - 32;
		}
	}
	return (a);
}
