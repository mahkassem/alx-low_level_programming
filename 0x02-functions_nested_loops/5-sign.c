#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int
 * Return: int
 */
int print_sign(int n)
{
	/* check n */
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
