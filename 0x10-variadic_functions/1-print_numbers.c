#include "variadic_functions.h"
/**
 * print_numbers - it prints number followed by new lines
 * @separator: separtor to used
 * @n:number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
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
