#include <stdio.h>
/**
 * Main - print size of varialbles
 * int, long int, long long int, char, float
 * Return : 0 if it's successful
 * it return zero
 * Description: getting size of the data type in c
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;
	
	printf(" the size of an int is : %lu .\n", (unsigned long)sizeof(i));
	printf(" the size of an long int is : %lu .\n", (unsigned long)sizeof(li));
	printf(" the size of an char is : %lu .\n", (unsigned long)sizeof(c));
	printf(" the size of an float is : %lu .\n", (unsigned long)sizeof(f));
	printf(" the size of an long long int is : %lu .\n", (unsigned long)sizeof(lli));
	return (0);
}
