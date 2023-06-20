#include "main.h"
/**
 * print_alphabet - writes the alphabet to _putchar
 *
 * Return: On success 0.
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 && a != 113)
		{
			_putchar(a);
		}
	}
	_putchar(10);
}
