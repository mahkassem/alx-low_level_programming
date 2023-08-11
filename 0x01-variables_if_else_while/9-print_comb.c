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

	/** 0 to 9 separated by commas */
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')
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
