#include "main.h"
/**
 * swap_int - echange l'addresse de pointer
 * @a: pointer a
 * @b: pointer b
 *
 * Return: On success 0.
 */

void swap_int(int *a, int *b)
{
	int *p;

	p = b;
	b = a;
	a = p;
}
