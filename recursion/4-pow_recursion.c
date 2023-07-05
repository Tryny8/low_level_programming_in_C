#include "main.h"
/**
 * _pow_recursion - calcul d'un nombre x exposant y
 * @x: valeur
 * @y: power
 *
 * Return: On success 0.
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (x * 1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
	else
	{
		return (-1);
	}
}
