#include <stdio.h>
/**
 * main - print size of varialbles
 *
 * Description: getting size of the data type in c,
 * int, long int, long long int, char, float
 *
 * Return : Always return 0 (success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;
	
	printf(" Size of an int is : %lu byte(s)\n", (unsigned long)sizeof(i));
	printf(" Size of a long int is : %lu byte(s)\n", (unsigned long)sizeof(li));
	printf(" Size of a char is : %lu byte(s)\n", (unsigned long)sizeof(c));
	printf(" Size of a float is : %lu byte(s)\n", (unsigned long)sizeof(f));
	printf(" Size of a long long int is : %lu byte(s)\n", (unsigned long)sizeof(lli));
	return (0);
}
