#include "variadic_functions.h"
/**
 * print_strings - write function to prints strings followed by new line
 * @separator: separator
 * @n: number of strings passed into the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d%s ", va_arg(ptr, unsigned int), separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
