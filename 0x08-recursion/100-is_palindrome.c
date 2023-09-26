#include "main.h"
int isPalRec(char str[], int s, int e);
/**
 * is_palindrome - is it paladome or not
 * @s: string
 * Return: (1 or 2)
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (isPalRec(s, 0, n - 1));
}
/**
 * isPalRec - check is palindrome
 * @str: string
 * @s: s
 * @e: e
 * Return: 0 or 1
 */
int isPalRec(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (isPalRec(str, s + 1, e - 1));
	return (1);
}

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
