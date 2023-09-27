#include "lists.h"

/**
 * print_listint_safe - print the elements
 * in a listint_t list
 *
 * @head: listint_t *
 *
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur = head;
	size_t count = 0;

	while (cur != NULL)
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		count++;
		if (cur->next >= cur)
		{
			printf("-> [%p] %d\n", (void *)cur->next, cur->next->n);
			printf("-> [%p] %d\n", (void *)cur, cur->n);
			break;
		}
		cur = cur->next;
	}

	return (count);
}
