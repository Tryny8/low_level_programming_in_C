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

	while (str[len] != '\0')
	{
		if (str[len] >= (str[len] / 2) + 1)
		{
			_putchar(str[len]);
			len++;
		}
		else
		{
			len++;
		}
		len++;
	}
	_putchar(10);
}
