#include "lists.h"
/**
 * get_nodeint_at_index - return nth node index
 * @head: head node
 * @index: index to nth node
 * Return: node at index;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head != NULL)
	{
		while (head != NULL && (n != index))
		{
			head = head->next;
			n++;
		}
		if (n != index)
			return (NULL);
		return (head);
	}
	else
		return (NULL);
}
