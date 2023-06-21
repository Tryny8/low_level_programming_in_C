#include "main.h"
/**
 * print_sign - checks for lowercase and uppercase character
 * @n: The charater c to stdoud
 *
 * Return: On success 0.
 */

int print_sign(int n)
{
	int sign_number;

	sign_number = n;

	if (sign_number > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (sign_number == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (sign_number < 0)
	{
		_putchar(45);
		return (1);
	}
	else
	{
		return (0);
	}
}
