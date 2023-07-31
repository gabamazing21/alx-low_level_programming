#include "lists.h"
#include <stdio.h>
/**
  * print_list - print element in a linkedinlist
  * @h: list to be inserted
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		++n;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (n);
}
