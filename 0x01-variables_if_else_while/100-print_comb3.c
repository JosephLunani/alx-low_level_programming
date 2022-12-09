#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int namba1, namba2;

	namba1 = 48;

	while
		(namba1 < 58) {
			namba2 = 48;
			while
				(namba2 < 58) {
					putchar(namba1);
					putchar(namba2);
					namba2++;
					putchar(',');
					putchar(' ');
				}

			namba1++;
		}
	putchar('\n');
	return (0);
}
