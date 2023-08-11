#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/**
	 * Write a script that compiles a C file and creates
	 * an executable named cisfun.
	 *
	 * The C file name will be saved in the variable $CFILE
	 */
	char *CFILE = "cisfun.c";

	printf("gcc -Wall -pedantic -Werror -Wextra %s -o cisfun\n", CFILE);

	return (0);
}
