#include "lists.h"
/**
  * print_listint_safe - print listint_t linkedlist
  * @h: pointer to head node
  * Return: number of nodes in a list
  */
size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;
	const listint_t *visited[1000];

	while (current != NULL)
	{
		size_t i;

		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("[%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}
		printf("[%p] %d\n", (void *)current, current->n);
		visited[count++] = current;
		current = current->next;
	}
	return (count);
}
