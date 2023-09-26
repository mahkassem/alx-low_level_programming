#include "lists.h"

/**
 * add_nodeint_end - add a new node to
 * the tail of the list
 *
 * @head: listint_t **
 * @n: int
 *
 * Return: listint_t *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *cursor = *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;

		cursor->next = node;
	}
	else
		*head = node;

	return (node);
}
