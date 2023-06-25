#include "main.h"
/**
 * print_numbers - writes the alphabet to _putchar
 *
 * Return: On success 0.
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
