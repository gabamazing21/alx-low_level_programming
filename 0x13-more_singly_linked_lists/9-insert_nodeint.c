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
	unsigned int size = getSize(*head);
	unsigned int i = 0;
	listint_t *firstNode;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;
	if (idx > size)
		return (NULL);
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	else
	{
		firstNode = *head;
		while (firstNode != NULL && (i < idx))
		{
			firstNode = firstNode->next;
			i++;
		}

		if (firstNode != NULL && (newNode != NULL))
		{
			newNode->next = firstNode->next;
			firstNode->next = newNode;
			return (firstNode);
		}
		else
			return (NULL);
	}
}

/**
 * getSize - size of linkedlist
 * @head: head node
 * Return: size
 */
unsigned int getSize(listint_t *head)
{
	unsigned int size = 0;

	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return (size);
}
