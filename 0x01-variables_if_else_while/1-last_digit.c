#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{

	/** generate a random number */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/** check if last digi less than 6*/
	if (n % 10 != 0 && n % 10 < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	/** check if last digit is greather than 5*/
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	/** check if last digit is 0*/
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
