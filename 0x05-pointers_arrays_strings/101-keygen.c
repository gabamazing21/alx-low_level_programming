#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password to crack file
 * Return: always (0) success
 */
int main(void)
{
	int pass[64], i, add = 0, n;

	srand(time(NULL));
	for (i = 0; i < 64; i++)
	{
		pass[i] = rand() % 78;
		add = add + pass[i] + '0';
		putchar(pass[i] + '0');
		if ((2772 - add) - 48 < 78)
		{
			n = 2772 - add - '0';
			add = add + n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
