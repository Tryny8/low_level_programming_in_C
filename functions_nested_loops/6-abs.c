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

	sign_number = -n;

	if (n > 0)
	{
		_putchar(n);
	}
	else if (n == 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		_putchar(sign_number);
	}
	return (0);
}
