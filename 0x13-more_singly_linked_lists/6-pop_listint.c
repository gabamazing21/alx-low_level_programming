#include "lists.h"
/**
  * pop_listint - delete head node
  * @head: double pointer head node
  * Return: return head node's data(n)
  */
int pop_listint(listint_t **head)
{
	listint_t *mv;

	mv = *head;
	mv = mv->next;
	return (mv->n);
}
