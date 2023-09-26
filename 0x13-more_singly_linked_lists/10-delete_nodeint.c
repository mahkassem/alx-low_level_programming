#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at
 * a given index
 *
 * @head: listint_t **
 * @index: unsigned int
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, len = listint_len(*head);
	listint_t *cur_node = NULL;
	listint_t *prev_node = NULL;

	if (index > len)
		return (-1);

	if (len == 0)
		return (-1);

	while (head != NULL)
	{
		if (i == index)
		{
			cur_node = *head;
			if (i == 0)
			{
				*head = cur_node->next;
				free(cur_node);

				return (1);
			}

			prev_node->next = cur_node->next;
			free(cur_node);

			return (1);
		}
		else if ((i + 1) == index)
			prev_node = *head;

		head = &((*head)->next);
		i++;
	}

	return (-1);
}

/**
 *listint_len - length of a list
 *
 * @h: listint_t *
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
