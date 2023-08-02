#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of listint_t
 * @head: head node
 * @index: nth time to check
 * Return: return nth node, or NULL if index is out of bounds
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
