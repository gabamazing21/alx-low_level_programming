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
		if (ic == a)
		{
			result = 1;
			break;
		}
	}
	return (result);
}
