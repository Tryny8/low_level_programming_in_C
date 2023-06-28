#include "main.h"
/**
 * rev_string - returne la chaine de caractère à l'envers
 * @s: chaine de caractère
 *
 * Return: On success 0.
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		*s = (s[len]);
		len--;
	}
}
