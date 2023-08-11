#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char c;

	/** prints 0 to 9 */
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	/** prints a to f */
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	/** print a new line */
	putchar('\n');

	/** return 0 */
	return (0);
}
