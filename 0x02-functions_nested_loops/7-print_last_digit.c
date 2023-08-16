#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');
	return (lastdigit);
}
