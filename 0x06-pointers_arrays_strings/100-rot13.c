#include "main.h"
int _isalpha(int c);
int _islower(int c);
/**
  * rot13 - encode a string using rot13
  * @a: character input
  * Return: return char
  */
char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (_isalpha(a[i]) == 1)
		{
			if (_islower(a[i]) == 1)
			{
				a[i] = (((a[i] - 'a') + 13) % 26) + 'a';
			}
			else
			{
				a[i] = (((a[i] - 'A') + 13) % 26) + 'A';
			}
		}
	}
	return (a);
}

/**
 * _isalpha- check if char isalpha
 * @c: character to check isalpha
 * Return: always result
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _islower - check if char islower
 * @c: character to check islower
 * Return: always result
 */
int _islower(int c)
{
	char a;
	int result = 0;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (c == a)
		{
			result = 1;
			break;
		}
	}
	return (result);
}
