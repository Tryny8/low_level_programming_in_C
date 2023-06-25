#include "main.h"
/**
 * more_numbers - writes the numbers to _putchar
 * 0 to 14
 * Return: On success 0.
 */

void more_numbers(void)
{
	int a;
	int b;
	int nombre;
	int repetition;
	int compteur;

	nombre = 0;
	repetition = 0;
	compteur = 10;

	while (repetition <= compteur)
	{
		for (a = 48; a <= 57; a++)
		{
			for (b = 48; b <= 57; b++)
			{
				if (nombre <= 14) 
				{
					if (nombre > 9)
					{
						_putchar(a);
					}
					_putchar(b);
				}
				nombre = nombre + 1;
			}
		}
		nombre = 0;
		repetition = repetition + 1;
		_putchar(10);
	}
}
