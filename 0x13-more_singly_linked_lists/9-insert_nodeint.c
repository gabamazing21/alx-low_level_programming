#include "lists.h"
/**
  * insert_nodeint_at_index - it insert new node at a given position
  * @head: pointer to pointer head node
  * @idx: index postion to add new node
  * @n: integer data
  * Return: return addres of new node or Null
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *lk, *current;

	if (head == NULL)
		return (0);
	lk = malloc(sizeof(listint_t));
	if (lk == NULL)
		return (0);
	lk->n = n;
	lk->next = NULL;
	if (idx == 0)
	{
		lk->next = *head;
		*head = lk;
		return (lk);
	}
	current = *head;
	while (current != NULL && i < idx - 1)
	{
		i++;
		current = current->next;
	}
	if (current == NULL)
	{
		free(lk);
		return (NULL);
	}
	lk->next = current->next;
	current->next = lk;
	return (lk);
}
