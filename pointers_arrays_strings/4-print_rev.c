#include "main.h"
/**
 * _print_rev - imprime la chaine de caractère à l'envers
 * @s: chaine de caractère
 *
 * Return: On success 0.
 */

void print_rev(char *s)
{
	int len = 0;
	char char_current = 0;
	char caractereActuel = 0;

	do {
		char_current = s[len];
		len++;
	} while (char_current != '\0');

	len--;

	do {
		caractereActuel = s[len];
		len--;
		if (caractereActuel != '\0')
		{
			_putchar(caractereActuel);
		}
	} while (caractereActuel != '\0');
	_putchar(10);
}
