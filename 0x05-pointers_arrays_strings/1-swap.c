#include "main.h"

/**
 * swap_int - swaps values pointed
 * @a: pointer to address
 * @b: pointer to the second address
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
