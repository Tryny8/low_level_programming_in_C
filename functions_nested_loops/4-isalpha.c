#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The charater c to stdoud
 *
 * Return: On success 0.
 */

int _isalpha(int c)
{
	int alpha_case;

	alpha_case = c;

	if ((alpha_case >= 65) && (alpha_case <= 90))
	{
		return (1);
	}
	else if ((alpha_case >= 97) && (alpha_case <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
