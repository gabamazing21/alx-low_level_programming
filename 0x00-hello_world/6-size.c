#include <stdio.h>
/**
 * main - print size of varialbles
 *
 * Description: getting size of the data type in c,
 * int, long int, long long int, char, float
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	printf(" Size of a char: %lu byte(s)\n", sizeof(char));
	printf(" Size of an int: %lu byte(s)\n", sizeof(int));
	printf(" Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf(" Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf(" Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
