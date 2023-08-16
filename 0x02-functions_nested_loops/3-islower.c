#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: int
 */
int _islower(int c)
{
	/* 97 = a, 122 = z */
	if (c >= 'a' && c <= 'z')
		return (1);

	/* else */
	return (0);
}
