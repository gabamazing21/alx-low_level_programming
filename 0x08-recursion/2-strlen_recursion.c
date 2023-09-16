#include "main.h"
/**
 * _strlen_recursion - get length of string using recursion
 * @s: pointer to string
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
