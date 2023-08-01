#include "lists.h"
/**
  * free_listint - free linkedlist int
  * @head: header node
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
