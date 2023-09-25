#include "lists.h"
/**
 * add_nodeint_end - add new node to the linkedlist at the end
 * @head: head node
 * @n: string
 * Return: number of item
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		if (*head == NULL)
			*head = newNode;
		else
		{
			listint_t *lastNode = *head;
			/*looking for last node, it will be null */
			while (lastNode->next != NULL)
			{
				lastNode = lastNode->next;
			}
			/* adding new node at the end of the linkedlist */
			/*with the help of last node */
			lastNode->next = newNode;
		}
	}
	else
		return (NULL);
	return (newNode);
}
