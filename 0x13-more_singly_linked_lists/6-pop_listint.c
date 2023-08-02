#include "lists.h"
/**
  * pop_listint - delete head node
  * @head: double pointer head node
  * Return: return head node's data(n)
  */
int pop_listint(listint_t **head)
{
	listint_t *mv;
	int value;

	if (*head == NULL)
		return (0);
	mv = *head;
	*head = mv->next;
	value = mv->n;
	free(mv);
	return (value);
}
