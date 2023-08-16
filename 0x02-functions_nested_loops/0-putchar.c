#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char school[10] = "_putchar";

	/* _putchar followed by new line */

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}

	_putchar('\n');

	return (0);
}
