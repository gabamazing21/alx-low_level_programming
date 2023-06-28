#include "main.h"
/**
 * _atoi - it convert string to integer
 * @s: input parameter
 * Return: array int
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int is_negative = 1;
	int digit_found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				is_negative *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			digit_found = 1;
		}
		else if (digit_found)
			break;
		i++;
	}
	return (num * is_negative);
}

