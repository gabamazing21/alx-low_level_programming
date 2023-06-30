#include "main.h"
/**
  * cap_string - change lower letter to capital
  * @a:array
  * Return:it array
  */
char *cap_string(char *a)
{
	int j = 0;

	if (a[j] >= 'a' && a[j] <= 'z')
		a[j] = a[j] - 32;
	for (; a[j] != '\0'; j++)
	{
		if (a[j] == ',' || a[j] == ';' || a[j] == '.' ||
				a[j] == '!' || a[j] == '?'
				|| a[j] == '"' || a[j] == '('
				|| a[j] == ')' || a[j] ==
				'{' || a[j] == '}' || a[j] ==
				' ' ||
				a[j] == '\t' || a[j] == '\n')
		{
			if (a[j + 1] >= 'a' && a[j + 1] <= 'z')
			{
				a[j + 1] = a[j + 1] - 32;
			}
		}
	}
	return (a);
}
