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
		for (num = 0; num <= n; num++)
		{

			for (mult = 0 ; mult <= n; mult++)
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
