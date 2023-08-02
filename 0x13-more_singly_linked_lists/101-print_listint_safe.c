#include "lists.h"
/**
  * print_listint_safe - print listint_t linkedlist
  * @h: pointer to head node
  * Return: number of nodes in a list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise = head, *hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}
	}
	return (count);
}
