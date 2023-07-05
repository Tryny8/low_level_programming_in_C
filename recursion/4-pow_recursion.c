#include "main.h"
/**
 * _pow_recursion - calcul le factoriel d'un nombre
 * @x: valeur
 * @y: power
 *
 * Return: On success 0.
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y != 0)
		{
			return (_pow_recursion(x, y - 1) * x);
		}
		else
		{
			return (_pow_recursion(x, y) * x);
		}
	}
	else
	{
		return (-1);
	}
}
