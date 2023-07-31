#include "lists.h"
#include <stdio.h>
/**
  * print_list - print element in a linkedinlist
  * @h: list to be inserted
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d]", h->len);
			printf(" %s \n", h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
