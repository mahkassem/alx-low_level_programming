#include "lists.h"

/**
 * list_len - get tje number of elements
 * in a list
 *
 *@h: const list_t *
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
