#include "lists.h"
/**
 * free_listint - free listint and set head to null
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *next;

	tmp = *head;
	while ( tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*head = NULL;
}
