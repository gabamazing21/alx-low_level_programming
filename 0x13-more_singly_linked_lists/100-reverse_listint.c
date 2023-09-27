#include "lists.h"
/**
 * reverse_listint - reverse linklist
 * @head: head node
 * Return:first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		/* store next */
		next = current->next;
		/* reverse current node's pointer */
		current->next = prev;
		/* move pointers one position ahead*/
		prev = current;
		/* next next*/
		current = next;
	}
	*head = prev;
	return (*head);
}
