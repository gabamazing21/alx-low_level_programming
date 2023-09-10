#include "main.h"
/**
 * main - print error if main argument isn't upto two
 * @argc: argument count
 * @argv: argument value
 * Return: zero or one
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
/**
 * _atoi - ocnvert alphabet to integer
 * @s: char value
 * Return: integer value
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
