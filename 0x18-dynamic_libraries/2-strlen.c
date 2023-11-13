#include "main.h"
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
