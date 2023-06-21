#include "main.h"
/**
 * print_last_digit  - checks absolute value of int
 * @n: The charater n to stdoud
 *
 * Return: On success 0.
 */

int print_last_digit(int n)
{
	int sign_number;

	int c;

	c = n % 10;

	sign_number = c * (-1);

	if (c > 0)
	{
		printf("Last digit of %d is %d\n", n, c);
		return (c);
	}
	else if (c == 0)
	{
		printf("Last digit of %d is %d\n", n, c);
		return (c);
	}
	else if (c < 0)
	{
		printf("Last digit of %d is %d\n", n, sign_number);
		return (sign_number);
	}
	return (0);
}
