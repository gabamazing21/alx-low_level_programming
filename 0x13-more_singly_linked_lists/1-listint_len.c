#include "lists.h"
/**
 * listint_len - print element of list_t
 * @h: pointer to node
 * Return: return number of results
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
