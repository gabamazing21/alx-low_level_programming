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
	int i;
	char c;
	float f;
	long int j;
	long long int k;


	printf(" Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf(" Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf(" Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf(" Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf(" Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	return (0);
}
