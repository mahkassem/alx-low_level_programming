#include "main.h"

/**
 * main function
 *
 * return 0
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
