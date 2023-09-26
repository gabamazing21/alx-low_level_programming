#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at idx;
 * @head: head node
 * @idx: index
 * @n: data
 * Return: the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *firstNode;

	if (*head == NULL)
		return (NULL);

	firstNode = *head;
	while (firstNode != NULL && (i != idx))
	{
		firstNode = firstNode->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	firstNode->n = n;
	return (firstNode);
}
