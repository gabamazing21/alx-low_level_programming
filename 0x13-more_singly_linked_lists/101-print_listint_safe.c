#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	const listint_t *loop_found;
	int flag = 0;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			loop_found = slow;
			break;
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;

		if (head == loop_found && flag == 0)
		{
			flag++;
			continue;
		}
		if (head == loop_found && flag == 1)
		{
			printf("-> [%p] %d\n", (void *)loop_found, loop_found->n);
			break;
		}
	}

	return (count);
}

