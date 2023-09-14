/**
 * print_name - print name of people
 * point to function
 * @name: name
 * @f: callback function
 */
#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
