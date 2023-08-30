#include "main.h"

/**
 * factorial - get the factorial number
 *
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}
