#include "main.h"
/**
 * _isalpha- check if char isalpha
 * @c: character to check isalpha
 * Return: always result
 */
int _isalpha(int c)
{
	char a;
	int result1 = 0;
	int result2 = 0;
	int final_result = 0;

	for (a = 'A' ; a <= 'Z' ; a++)
	{
		if (c == a)
		{
			result1 = 1;
			break;
		}
	}
	for (a = 'a' ; a <= 'z' ; a++)
        {
                if (c == a)
                {
                        result2 = 1;
                        break;
                }
        }
	if( result1 == 1 || result2 == 1)
		final_result = 1;
	
	return (final_result);
}
