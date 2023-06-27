#include "main.h"
/**
 * _puts - imprime la chaine de caractère
 * @str: chaine de caractère
 *
 * Return: On success 0.
 */

void _puts(char *str)
{
	int nombreDeCaracteres = 0;
	char caractereActuel = 0;

	do {
		caractereActuel = str[nombreDeCaracteres];
		nombreDeCaracteres++;
	} while (caractereActuel != '\0');
	nombreDeCaracteres--;
	_putchar(caractereActuel);
	_putchar(10);
}
