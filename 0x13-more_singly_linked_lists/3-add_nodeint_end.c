#include "lists.h"
/**
  * add_nodeint_end - add int node to the end of the list
  * @head: pointer to pointer header node
  * @n: integer to add
  * Return: return the address of the new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lk, *temp;

	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (0);
	lk->n = n;
	lk->next = NULL;

	if (*head == NULL)
	{
		*head = lk;
		return (lk);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = lk;
	return (lk);
}
