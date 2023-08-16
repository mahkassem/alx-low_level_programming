#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line.
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
