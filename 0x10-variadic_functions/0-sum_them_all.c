#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all input argument
 * @n: number of items to add
 * Return: return sum
 */
int sum_them_all(const unsigned int  n, ...)
{
	unsigned int Sum = 0, i;
	va_list ptr;

	va_start(ptr, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		Sum += va_arg(ptr, unsigned int);
	va_end(ptr);
	return (Sum);
}
