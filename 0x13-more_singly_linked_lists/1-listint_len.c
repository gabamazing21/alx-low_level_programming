#include "lists.h"
/**
  * listint_len - return number of element in linked listint_t
  * @h: header node
  * Return: return len of list
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
