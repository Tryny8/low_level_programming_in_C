#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet x10 to _putchar
 *
 * Return: On success 0.
 */

void print_alphabet_x10(void)
{
	int c;

	for (c = 0; c <= 10; c++)
	{
		int a;

		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar(10);
	}
}
