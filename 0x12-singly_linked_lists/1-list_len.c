#include "lists.h"
/**
  * list_len - it returns linkedlist length
  * @h: head node
  * Return: return number of item
  */
size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

