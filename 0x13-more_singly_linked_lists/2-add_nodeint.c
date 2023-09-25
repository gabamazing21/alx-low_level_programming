#include "lists.h"
/**
 * add_nodeint - add new node to the linkedlist at the begining
 * @head: head node
 * @n: string
 * Return: number of item
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	else
		return (NULL);
	return (newNode);
}
