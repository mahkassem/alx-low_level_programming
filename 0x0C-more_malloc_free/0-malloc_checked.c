#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: unsigned int
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
