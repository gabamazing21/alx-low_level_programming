#include "lists.h"
/**
  * delete_nodeint_at_index - delete node at inserted index at listint_t
  * @head: pointer to pointer head node
  * @index: index to delete node
  * Return: 1 or -1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *temp;

	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		temp = current;
		i++;
	}
	if (current == NULL)
		return (-1);
	temp->next = current->next;
	return (1);
}
