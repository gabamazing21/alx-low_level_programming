#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at point nth
 * @head: head node
 * @index: nth position
 * Return: 1 success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head;
	listint_t *del;

	if (index == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			tmp = tmp->next;
			i++;
		}
		del = tmp->next;
		tmp->next = tmp->next->next;
		del->next = NULL;
		free(del);
		return (1);
	}
	return (-1);
}
