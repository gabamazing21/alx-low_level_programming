#include "lists.h"
/**
 * dlistint_len - return number of element:
 * @h: head node
 * Return: return number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != 0)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
