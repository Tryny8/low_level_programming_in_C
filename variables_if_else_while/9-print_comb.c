#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Affiche de 0 à 9 séparé de "," via un putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 48)
			putchar(32);
		putchar(a);
		if (a != 57)
			putchar(44);
	}
	{
	putchar('\n');
	}
	return (0);
}
