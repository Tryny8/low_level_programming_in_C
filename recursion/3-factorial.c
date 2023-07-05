#include "main.h"
/**
 * factorial - calcul le factoriel d'un nombre
 * @n: nombre
 *
 * Return: On success 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
