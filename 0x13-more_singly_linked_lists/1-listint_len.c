#include "lists.h"

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
