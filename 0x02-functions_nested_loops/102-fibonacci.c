#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int fnum = 1, snum = 2;
	int thirdnum = fnum + snum;

	for (n = 3; n < 50; ++n)
	{
		fnum = snum;
		snum = thirdnum;
		printf("%d, ", thirdnum);
	}
}
