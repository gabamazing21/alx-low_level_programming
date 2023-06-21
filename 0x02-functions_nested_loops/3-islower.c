#include "main.h"
/**
 * int _islower - check if char islower
 * @c - input parameter
 * Return: return result
 */
int _islower(int c)
{
	char a ;
	int result;
	for (a = 'a' ; a <= 'z' ; a++)
	{
		if ( c == a)
		{
			result = 1;
			break;
		}else{
			result = 0;
		}
	}
	return result;
}
