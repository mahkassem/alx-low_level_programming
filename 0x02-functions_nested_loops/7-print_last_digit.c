#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int
 * Return: int
 */
int print_last_digit(int n)
{
	/* local variable declaration */
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');

	return (lastdigit);
}
