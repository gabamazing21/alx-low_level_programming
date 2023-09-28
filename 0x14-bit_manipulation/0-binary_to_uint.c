#include "main.h"
int _strlen(char *s);
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: point to string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, pow = 1, num = 0;

	if (b == NULL)
	{
		printf("it's null\n");
		return (0);
	}
	len = _strlen((char *) b);
	for (i = len - 1 ; i >= 0; i--)
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		if (b[i] == '1')
			num += pow;
		pow *= 2;
	}
	return (num);
}
/**
 * _strlen - it return string lengh
 * @s: strings to get it's length
 * Return: it return lenght
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;

	}
	return (length);
}
