#include "main.h"

/**
 * main function
 *
 * return 0
 */
void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar(10);
}
