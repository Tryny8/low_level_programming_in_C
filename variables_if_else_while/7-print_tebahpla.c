#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Affiche inverser l'alphabet via un putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	{
	putchar('\n');
	}
	return (0);
}
