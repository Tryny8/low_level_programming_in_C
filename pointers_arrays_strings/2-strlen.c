#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The charater c to stdoud
 *
 * Return: On success 0.
 */

int _isupper(int c)
{
	int uppercase;

	uppercase = c;

	if ((uppercase >= 65) && (uppercase <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
