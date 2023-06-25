#include "main.h"
/**
 * _isdigit - checks for number character
 * @c: The charater c to stdoud
 *
 * Return: On success 0.
 */

int _isdigit(int c)
{
	int digit;

	digit = c;

	if ((digit >= 48) && (digit <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
