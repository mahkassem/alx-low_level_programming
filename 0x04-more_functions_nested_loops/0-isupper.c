#include "main.h"
/**
 * _isupper - function that verifies if
 * a character is uppercase or not
 * @c: int
 * Return: int
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
