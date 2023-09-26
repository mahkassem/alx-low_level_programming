#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a given index
 *
 * @head: listint_t *
 * @index: unsigned int
 *
 * Return: listint_t *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cur = NULL;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				cur = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}

	return (cur);
}
