#include "main.h"
/**
 * _puts_recursion - affiche la chaine de caractère via une focntion
 * recursive.
 * @s: chaine de caractère
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
