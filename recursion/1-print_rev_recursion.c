#include "main.h"
/**
 * _print_rev_recursion - affiche la chaine de caractère via une focntion
 * recursive.
 * @s: chaine de caractère
 *
 * Return: On success 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
	_putchar('\n');
}
