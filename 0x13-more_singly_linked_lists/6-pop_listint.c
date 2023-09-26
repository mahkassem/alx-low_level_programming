#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 *
 * @head: listint_t **
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *popped;

	if (*head == NULL)
		return (0);

	popped = *head;
	val = popped->n;
	free(popped);

	*head = (*head)->next;

	return (val);
}
