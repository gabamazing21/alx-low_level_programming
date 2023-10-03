#include "main.h"
int create_file(const char *filename, char *text_content)
{
	int n, fd;
	fd = open(filename, O_CREAT | O_RDWR);

}
