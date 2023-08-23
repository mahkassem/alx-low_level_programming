#include "main.h"

/**
 * cap_string - capitalize first character
 *
 * @str: char *
 * Return: char *
 */
char *cap_string(char *str)
{
	int i = 0, j;

	while (str[++i])
	{
		if (
		    str[i] == ' ' ||
		    str[i] == '\t' ||
		    str[i] == '\n' ||
		    str[i] == ',' ||
		    str[i] == ';' ||
		    str[i] == '.' ||
		    str[i] == '!' ||
		    str[i] == '?' ||
		    str[i] == '"' ||
		    str[i] == '(' ||
		    str[i] == ')' ||
		    str[i] == '{' ||
		    str[i] == '}' ||
		    i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}
