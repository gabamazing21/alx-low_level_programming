#include "lists.h"
/**
 * print_listint - print element of list_t
 * @h: pointer to node
 * Return: return number of results
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
