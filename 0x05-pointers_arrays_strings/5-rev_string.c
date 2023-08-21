#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, length;

	length = _strlen(s) - 1;
	while (length > i)
	{
		swap_char(s + length, s + i);
		i++;
		length--;
	}
}

/**
 *_strlen - length of a string
 * @s: string
 * Return: int;
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}

/**
 * swap_char - swap two characters
 * @a: char
 * @b: char
 * Return: void
 */
void swap_char(char *a, char *b)
{
	char tmp = *a;

	*a = *b;
	*b = tmp;
}
