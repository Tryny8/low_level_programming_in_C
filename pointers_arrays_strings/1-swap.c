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
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}
