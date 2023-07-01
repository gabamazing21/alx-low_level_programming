#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer
 * @b: Buffer to print
 * @size: Size of the buffer
 */
void print_buffer(char *b, int size)
{
	int k, m;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (k = 0; k < size; k += 10)
	{
		printf("%08x: ", k);

		for (m = k; m < k + 10; m++)
		{
			if (m < size)
				printf("%02x", (unsigned char)b[m]);
			else
				printf("  ");

			if (m % 2 != 0)
				printf(" ");
		}

		for (m = k; m < k + 10; m++)
		{
			if (m >= size)
				break;

			if (b[m] >= 32 && b[m] <= 126)
				printf("%c", b[m]);
			else
				printf(".");
		}

		printf("\n");
	}
}
