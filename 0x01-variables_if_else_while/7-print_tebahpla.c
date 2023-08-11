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

	/** print z to z*/
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	/** print a new line */
	putchar('\n');

	/** return 0 */
	return (0);
}
