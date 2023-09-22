#include "lists.h"
/**
 * list_len - print element of list_t
 * @h: pointer to node
 * Return: return number of results
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
