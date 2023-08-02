#include "lists.h"
/**
  * free_list - it free list_t
  * @head: header of list to free
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(head->str);
		free(temp);
	}
}
