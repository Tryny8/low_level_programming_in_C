#include "main.h"
/**
 * _abs  - checks absolute value of int
 * @n: The charater n to stdoud
 *
 * Return: On success 0.
 */

int _abs(int n)
{
	int sign_number;

	sign_number = n * (-1);

	if (n > 0)
	{
		printf("%d", n);
	}
	else if (n == 0)
	{
		printf("%d", n);
	}
	else if (n < 0)
	{
		printf("%d", sign_number);
	}
	return (0);
}
