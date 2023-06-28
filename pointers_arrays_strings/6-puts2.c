#include "main.h"
/**
 * puts2 - imprime les caractères paire
 * @str: chaine de caractère
 *
 * Return: On success 0.
 */

void puts2(char *str)
{
	int len = 0;
	int counter = 0;

	while (str[len] != '\0')
	{
		if ((counter % 2) == 0)
		{
			_putchar(str[len]);
			len++;
		}
		else
		{
			len++;
		}
		counter++;
	}
	_putchar(10);
}
