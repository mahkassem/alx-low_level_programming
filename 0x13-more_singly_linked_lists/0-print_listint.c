#include "lists.h"

/**
 * print_listint - print the elements
 * in a listint_t list
 *
 * @h: listint_t *
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *cur = h;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		size += 1;
		cur = cur->next;
	}

	return (size);
}
