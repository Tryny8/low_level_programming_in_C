#include "main.h"
/**
 * print_triangle - writes the triangle # to _putchar
 * @size : size of triangle
 *
 * Return: On success 0.
 */

void print_triangle(int size)
{
	int h;
	int i;
	int triangle;

	triangle = size;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = 1; i <= size; i++)
			{
				if (i > (triangle - h))
				{
					_putchar(35);
				}
				else
				{
					_putchar(32);
				}
			}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
