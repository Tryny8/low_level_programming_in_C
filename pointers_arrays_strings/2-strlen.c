#include "main.h"
/**
 * _strlen - retour le longueur de la string
 * @*s: chaine de caractère
 *
 * Return: On success 0.
 */

int _strlen(char *s)
{
	int nombreDeCaracteres = 0;
	char caractereActuel = 0;

	do {
		caractereActuel = s[nombreDeCaracteres];
		nombreDeCaracteres++;
	}
	while (caractereActuel != '\0');
	{
		nombreDeCaracteres--;
	}
	return (nombreDeCaracteres);
}
