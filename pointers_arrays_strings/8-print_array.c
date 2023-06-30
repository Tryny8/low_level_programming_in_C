#include "main.h"
/**
 * print_array - imprime le tableau
 * @a: tableau
 * @n: nombre d'éléments du tableau
 *
 * Return: On success 0.
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 1)
	{
		if (n > 256)
		{
			n = n - 1;
		}
		for (i = 0; i < n; i++)
		{
			printf("%d,", a[i]);
			if (i != n)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
