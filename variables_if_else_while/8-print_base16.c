#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Affiche de 0 à 9 et l'alphabet de a à f via un putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a <= 102; a++)
	{
		if (a == 58)
			a = 97;
		putchar(a);
	}
	{
	putchar('\n');
	}
	return (0);
}
