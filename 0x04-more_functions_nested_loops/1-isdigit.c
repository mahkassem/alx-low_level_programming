#include "main.h"
/**
 * _isdigit - function that verifies if
 * acharacter is a digit or not
 * @c: int
 * Return: int
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
