#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	/* local variable declaration */
	int counter = 0;
	int letter;

	/* alphabet printing */
	while (counter++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar(10);
	}
}
