#include "main.h"

/**
 * _abs
 *
 * Return: int
 */
int _abs(int i)
{
	/* check i value */
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
