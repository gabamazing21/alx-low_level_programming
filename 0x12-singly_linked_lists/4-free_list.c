#include "lists.h"
/**
 * free_list - free list
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *next;

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
}
