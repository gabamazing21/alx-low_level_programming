#include "main.h"
/**
 * main - function to add commandline argument
 * @argc: argument count
 * @argv: argument value
 * Return: zero or one
 */

int main(int argc, char **argv)
{
	int i, sum = 0, num, is_digit;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i <= argc ; i++)
		{
			num = _atoi(argv[i]);
			is_digit = _isdigit(num);
			if (is_digit == 1)
			{
				sum = sum + num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
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

/**
 * _isdigit - check if it's digit
 * @c: character to check it's digit
 * Return: return result
 */
int _isdigit(int c)
{
	int result = 0;
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
		{
			result = 1;
		}
	}
	return (result);
}
