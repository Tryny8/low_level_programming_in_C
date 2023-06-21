#include "main.h"
/**
 * print_last_digit  - checks absolute value of int
 * @n: The charater n to stdoud
 *
 * Return: On success 0.
 */

int print_last_digit(int n)
{
	/* int sign_number; */

	int c;

	/* sign_number = n * (-1); */
	c = n % 10;

	if (c > 0)
	{
		printf("Last digit of %d is %d\n", n, c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d\n", n, c);
	}
	else if (c < 0)
	{
		printf("Last digit of %d is %d\n", n, c);
	}
	return (0);
}
