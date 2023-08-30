#include "main.h"

/**
 * is_prime_number - check if number is prime
 *
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - if n is prime
 *
 * @n: int
 * @start: int
 *
 * Return: int
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
