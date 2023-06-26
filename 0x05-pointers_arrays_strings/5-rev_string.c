#include "main.h"
/**
 * rev_string - to write string in reverse
 * @s: character to print
 */
void rev_string(char *s)
{
	int start = 0;
	int end = _strlen(s) - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}


}
/**
  * _strlen - get length of string
  * @s: character to check
  * Return: it return length
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
