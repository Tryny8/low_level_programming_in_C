#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The charater c to stdoud
 *
 * Return: On success 0.
 */

int _islower(int c)
{
	int lowercase;

	lowercase = c;

	if ((lowercase <= 97) && (lowercase >= 122))
		return (1);
	return (0);

}
