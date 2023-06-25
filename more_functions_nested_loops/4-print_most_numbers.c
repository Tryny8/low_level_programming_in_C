#include "main.h"
/**
 * print_most_numbers - writes the numbers to _putchar
 * except 2 and 4
 * Return: On success 0.
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 2 and a !=4)
			_putchar(a);
	}
	_putchar(10);
}
