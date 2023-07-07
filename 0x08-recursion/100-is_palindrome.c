#include "main.h"
int _strlen(char *s);
int is_palindrome_helper(char *inputString, int leftIndex, int rightIndex);
/**
  * is_palindrome - check if it's palindrome
  * @s: character to look at
  * Return: 1 or 0
  */
int is_palindrome(char *s)
{
	int len = _strlen(s) - 1;

	return (is_palindrome_helper(s, 0, len));
}
/**
  * is_palindrome_helper - help main function
  * @inputString: charactre to check
  * @leftIndex:0
  * @rightIndex: len-1
  * Return: int
  */
int is_palindrome_helper(char *inputString, int leftIndex, int rightIndex)
{
	if (leftIndex >= rightIndex)
		return (1);
	if (inputString[leftIndex] != inputString[rightIndex])
		return (0);
	return ((is_palindrome_helper(inputString, leftIndex + 1, rightIndex - 1)));

}

/**
 * _strlen - it return string lengh
 * @s: strings to get it's length
 * Return: it return lenght
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
