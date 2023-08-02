#include "lists.h"
/**
  * reverse_listint - reverse listint_t
  * @head: pointer to pointer head node
  * Return: return the address of the first node reversed listint_t
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
