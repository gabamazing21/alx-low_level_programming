#include "main.h"
/**
 * main - function to add commandline argument
 * @argc: argument count
 * @argv: argument value
 * Return: zero or one
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < argc ; i++)
		{
			if (_atoi(argv[i]) > 0)
				sum += _atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (0);
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
