#include "main.h"
/**
 * _isupper - it check if it's isUppercase
 * @c: character to check
 * Return: it return result
 */
int _isupper(int c)
{
	int result = 0;
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
			result = 1;
		}
	}
	return (result);
}
