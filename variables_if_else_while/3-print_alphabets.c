#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Affiche l'alphabet en minuscule et en
 * majuscule via un putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}
	{
	putchar('\n');
	}
	return (0);
}
