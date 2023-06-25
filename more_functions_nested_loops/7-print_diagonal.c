#include "main.h"
/**
 * print_diagonal - writes the diagonal \ to _putchar
 * @n : nombre de caractère space
 *
 * Return: On success 0.
 */

void print_diagonal(int n)
{
	int h;
	int i;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (i = 1; i <= h; i++)
			{
				if (i != 1)
					_putchar(32);
			}
		_putchar(92);
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
