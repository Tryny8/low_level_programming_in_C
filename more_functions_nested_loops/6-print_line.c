#include "main.h"
/**
 * print_line - writes the alphabet to _putchar
 * @n : nombre de caractère _
 *
 * Return: On success 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
