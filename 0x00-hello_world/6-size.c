#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/** char size */
printf("Size of a char: %lu byte(s)\n", sizeof(char));
/** int size */
printf("Size of an int: %lu byte(s)\n", sizeof(int));
/** long int size */
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
/** long long int size */
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
/** float size */
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
} /** End main */
