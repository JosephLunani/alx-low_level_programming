#include "main.h"

/**
 * print_line - prints line depending on a value n
 * @n: checks the length of the line
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i;

	for (i = n; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
}
