#include "main.h"
/**
 * jack_bauer  - affiche 24h d'affilé
 *
 * Return: On success 0.
 */

void jack_bauer(void)
{
	int heure;
	int minute;

	for (heure = 0; heure <= 24; heure++)
	{
		for (minute = 0; minute <= 60; minute++)
		{
			if (heure != 24)
			{
				if (minute != 60)
				{
					printf("%02d:%02d\n", heure, minute);
				}
				else
				{
					minute = 0;
					break;
				}
			}
			else
			{
				return;
			}
		}
	}
}
