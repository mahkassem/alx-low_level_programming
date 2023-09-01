#include <stdio.h>

/**
 * main - print number of arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char __attribute__((__unused__)) * argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
