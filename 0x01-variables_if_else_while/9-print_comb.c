#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	/** 0 to 9 separated by commas */
	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	/** print a new line */
	putchar('\n');

	/** return 0 */
	return (0);
}
