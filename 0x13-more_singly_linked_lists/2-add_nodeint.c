#include "lists.h"
/**
  * add_nodeint - write new node at the begin of linked list
  * @head: point to pointer head node
  * @n: integer to add
  * Return: address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lk;

	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (0);
	lk->n = n;
	lk->next = *head;
	*head = lk;
	return (lk);
}
