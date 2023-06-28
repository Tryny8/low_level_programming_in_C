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
	int index;
	int indend;
	char temp = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (index = 0, indend = len - 1; index < (len / 2); index++, indend--)
	{
		temp = s[index];
		s[index] = s[indend];
		s[indend] = temp;
	}
}
