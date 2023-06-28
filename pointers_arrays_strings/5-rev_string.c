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
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (index = 0; index = [index - len - 1]; index--)
	{
		temp = index;
		index = [index-len-1];
		[index-len-1] = temp;
			
	}
}
