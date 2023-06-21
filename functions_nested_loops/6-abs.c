#include "main.h"
/**
 * _abs  - checks absolute value of int
 * @n: The charater n to stdoud
 *
 * Return: On success 0.
 */

int _abs (int n)
{
	int sign_number;

	sign_number = n;

	if (sign_number > 0)
	{
		_putchar(n);
	}
	else if (sign_number == 0)
	{
		_putchar(n);
	}
	else if (sign_number < 0)
	{
		_putchar(n);
	}
	return (0);
}
