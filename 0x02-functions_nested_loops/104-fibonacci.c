#include "main.h"

/**
 * fibo - prints first 98 fibonacci numbers
 */
void fibo(void)
{
	int c, a, b, d;

	a = 1;
	b = 2;

	for (c = 0; c <= 98; c++)
	{
		d = a + b;
		a = b;
		b = d;
		_putchar(d + '0');
		_putchar(',');
		_putchar(' ');
	}
}
