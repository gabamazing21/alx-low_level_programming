#include "main.h"
/**
 * _isalpha- check if char isalpha
 * @c: character to check isalpha
 * Return: always result
 */
int _isalpha(int c)
{
	char a;
	int result = 0;

	for (a = 'A' ; a <= 'Z' ; a++)
	{
		if (c == a)
		{
			result = 1;
			break;
		}
	}
	return (result);
}
