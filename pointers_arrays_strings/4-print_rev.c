#include "main.h"
/**
 * print_rev - imprime la chaine de caractère à l'envers
 * @s: chaine de caractère
 *
 * Return: On success 0.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar(10);
}
