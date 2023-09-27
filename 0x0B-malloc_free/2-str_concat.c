#include "main.h"
int _strlen(char *s);
/**
 * str_concat - concatenate two string
 * @s1: first string
 * @s2: second string
 * Return: Return s
 */
char *str_concat(char *s1, char *s2)
{
	int len, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((s1 == NULL) && (s2 == NULL))
	{
		s = malloc(sizeof(char));
		s = "";
		return (s);
	}
	len = _strlen(s1) + _strlen(s2) + 1;
	s = malloc(sizeof(char) * len);

	if (s != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++, i++)
			s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
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
