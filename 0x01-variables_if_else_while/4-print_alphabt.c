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

	/** print a to z; except q & e*/
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	/** print a new line */
	putchar('\n');

	/** return 0 */
	return (0);
}
