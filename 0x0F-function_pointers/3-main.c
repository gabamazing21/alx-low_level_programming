#include "3-calc.h"
/**
 * main - main function
 */
int main(int argc, char *argv[])
{
	if(argc > 3 && argc < 0)
	{
		printf("Error 98\n");
		return (98);
	}
	if(!(atoi(argv[2]) != '+' || atoi(argv[2]) != '-' || atoi(argv[2]) != '*' || atoi(argv[2]) != '/' || atoi(argv[2]) != '%'))
	{
		printf("Error 99\n");
		return (99);
	}
	if ((atoi(argv[2]) == '/' && atoi(argv[3]) == 0) || (atoi(argv[2]) == '%' && atoi(argv[3]) == 0))
	{
		printf("Error 100\n");
		return (100);
	}
	return (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
}
