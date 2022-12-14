#include "main.h"
#include <stdlib.h>
/**
 * print_times_table - prints tables
 * @n: the number to be use to create table
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n > 15 || n < 0)
	{
		exit(0);
	}
	else
	{
		for (num = 1; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1 ; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
