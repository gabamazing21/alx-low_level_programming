#include "main.h"
/**
 * _isdigit - check if it's digit
 * @c: character to check it's digit
 * Return: return result
 */
int _isdigit(int c)
{
	int result = 0;
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
		{
			result = 1;
		}
	}
	return (result);
}
