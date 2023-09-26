#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * of a listint_t linked list
 *
 * @head: listint_t *
 *
 * Return: int
 *
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *cur = head;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
