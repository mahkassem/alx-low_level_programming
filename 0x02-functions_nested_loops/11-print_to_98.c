#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: int
 * Return: void
 */
void print_to_98(int n)
{
	/* check n value */
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);

		printf("%d\n", n);
	}
}
