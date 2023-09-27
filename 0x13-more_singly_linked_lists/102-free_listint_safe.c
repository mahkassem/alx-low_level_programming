#include "lists.h"

/**
 * free_listint_safe - free a listint_t linked list
 *
 * @h: listint_t **
 *
 * Return: size_t
 *
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur = *h;
	listint_t *next = NULL;
	size_t count = 0;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
		count++;
		if (cur == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
