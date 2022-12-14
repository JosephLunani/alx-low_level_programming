#include "main.h"
#include <stdlib.h>
/**
 * print_times_table - prints tables
 * @n: the number to be use to create table
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
	{
		exit(0);
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if ((c / 10) == 0)
				{
					 if (b == 0)
					 {
						 _putchar('0');
					 }
					 if (b == 0)
					 {
						 _putchar(' ');
						 _putchar((c % 10) + '0');
					 }
					 if (b < n)
					 {
						 _putchar(',');
						 _putchar(' ');
					 }
				}
				else
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
					if (b < a)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
