#include "lists.h"
/**
 * print_list - print element of list_t
 * @h: pointer to node
 * Return: return number of results
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str) != NULL ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
