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
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
