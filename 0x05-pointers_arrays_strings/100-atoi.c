#include "main.h"
#include <stdio.h>

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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			is_negative *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num += is_negative * (s[i] - '0');
		}
		else if (num != 0)
			break;
	}
	return (num);
}

