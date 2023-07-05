#include "main.h"
/**
 * _strlen_recursion - return la longueur de la chaine
 * @s: chaine de caractère
 *
 * Return: On success 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return ((_strlen_recursion(s + 1)) + 1);
	}
	return (0);
}
