#include "main.h"
/**
 * times_table - affiche les tables de 0 à 9
 *
 * Return: On success 0.
 */

void times_table(void)
{
	int t;
	int m;
	int resultat;

	while (t <= 9)
	{
		for (m = 0; m <= 9; m++)
		{
			resultat = (m * t);
			printf("%02d, ", resultat);
		}
		t = t + 1;
		_putchar('\n');
	}
}
