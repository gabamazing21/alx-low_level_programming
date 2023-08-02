#include "lists.h"
/**
  * free_listint2 - free listint_t list
  * @head: pointer to pointer header node
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *mv;

	if (head == NULL)
		return;
	mv = *head;

	while (mv)
	{
		temp = mv;
		mv = mv->next;
		free(temp);
	}
	*head = NULL;
}