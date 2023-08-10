#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/**
 * Main function:
 *
 * - You should produce the exact same output as in the example
 * - Warnings are allowed
 * - Your program should return 0
 * - You might have to install the package libc6-dev-i386 on
 * your Linux to test the -m32 gcc option
 */
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
} /** End main */
