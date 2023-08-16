#include "main.h"

/**
 * print_alphabet - main function
 *
 * Return: void
 */
void print_alphabet(void)
{
	/* local variable declaration */
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	/* new line */
	_putchar(10);
}
