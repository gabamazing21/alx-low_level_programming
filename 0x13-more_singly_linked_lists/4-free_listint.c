#include "lists.h"
/**
 * free_listint - free list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *next;

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
