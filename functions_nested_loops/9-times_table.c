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

	for (t = 0; t <= 9; t++)
	{
		for (m = 0; m <= 9; m++)
		{
			resultat = (m * t);
			if (m == 0)
			{
				printf("%d,", resultat);
			}
			else if (m > 0 && m < 9)
			{
				printf("%3d,", resultat);
			}
			else if (m == 9)
			{
				printf("%3d", resultat);
			}
			if (m != 9)
			{
				continue;
			}
		}
		printf("\n");
	}
}
