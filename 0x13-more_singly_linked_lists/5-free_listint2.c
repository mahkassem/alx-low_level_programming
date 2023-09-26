#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: listint_t **
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t **temp = head;
	listint_t *cur;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cur = *head;
			free(cur);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
