#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: listint_t **
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			cur = *head;
			free(cur);
			*head = (*head)->next;
		}
		*tmp = NULL;
	}
}
