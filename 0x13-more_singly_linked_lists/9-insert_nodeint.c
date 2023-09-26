#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a
 * given index
 *
 * @head: listint_t **
 * @idx: unsigned int
 * @n: int
 *
 * Return: listint_t *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev_node = NULL;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if ((i + 1) == idx)
			prev_node = *head;
		else if (i == idx)
		{
			if (i == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		head = &((*head)->next);
		i++;
	}
	return (NULL);
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
