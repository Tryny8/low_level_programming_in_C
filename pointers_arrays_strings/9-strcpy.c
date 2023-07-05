#include "main.h"
/**
 * *_strcpy - copie la chaine
 * @dest: chaine originale
 * @src: copie de la chaine
 *
 * Return: On success 0.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
