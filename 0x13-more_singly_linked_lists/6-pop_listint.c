#include "lists.h"
/**
 * pop_listint - delete head node of a linkedlist
 * @head: head of a node
 * Return: return data
 */
int pop_listint(listint_t **head)
{
	listint_t *toDelete;
	int result;

	if (*head != NULL)
	{
		toDelete = *head;
		result = toDelete->n;
		*head = toDelete->next;
		free(toDelete);
		return (result);
	}
	else
		return (0);
}

