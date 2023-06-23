#include "main.h"
/**
 * print_to_98  - affiche 24h d'affilé
 * @n: nombre qui varie pour revenir à 98
 *
 * Return: On success 0.
 */

void print_to_98(int n)
{
	int target;
	int resultat;

	target = 98;

	if (n > target)
	{
		for (resultat = n; resultat >= target; resultat--)
		{
			if (resultat != 98)
			{
				printf("%d, ", resultat);
			}
			else
			{
				printf("%d\n", resultat);
			}
		}
	}
	else if (n == target)
	{
		resultat = n;
		printf("%d\n", resultat);
	}
	else if (n < target)
	{
		for (resultat = n; resultat <= target; resultat++)
		{
			if (resultat != 98)
			{
				printf("%d, ", resultat);
			}
			else
			{
				printf("%d\n", resultat);
			}
		}
	}
}
