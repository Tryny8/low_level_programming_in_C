#include "main.h"
/**
 * puts_half - imprime la moitier de la chaine
 * @str: chaine de caractère
 *
 * Return: On success 0.
 */

void puts_half(char *str)
{
	int len = 0;
	int half = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (half <= ((len / 2) + 1))
	{
		_putchar(str[len]);
		half++;
	}
	_putchar(10);
}
