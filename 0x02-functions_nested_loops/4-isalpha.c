#include "main.h"

/**
 * _isalpha
 *
 * Return: int
 */
int _isalpha(int c)
{
	/* check ascii range */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
