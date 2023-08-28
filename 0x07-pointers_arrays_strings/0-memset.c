#include "main.h"

/**
 *_memset - fills memory with a constant byte
 * @s: char *
 * @b: char
 * @n: unsigned int
 *Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
