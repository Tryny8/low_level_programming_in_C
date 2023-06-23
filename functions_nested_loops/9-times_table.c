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

	m = 0;

	while (t <= 9)
	{
		while (m <= 9)
		{
			resultat = (m * t);
			printf("%02d, ", resultat);
			m = m + 1;
			if (m == 9)
			{
				_putchar('\n');
			}
		}
		t = t + 1;
		_putchar('\n');
	}
}
