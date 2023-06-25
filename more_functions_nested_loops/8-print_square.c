#include "main.h"
/**
 * print_square - writes the square # to _putchar
 * @size : size of square
 *
 * Return: On success 0.
 */

void print_square(int size)
{
	int h;
	int i;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(35);
			}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
