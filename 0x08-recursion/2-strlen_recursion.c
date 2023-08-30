#include "main.h"

/**
 * _strlen_recursion - string length
 *
 * @s: char *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
