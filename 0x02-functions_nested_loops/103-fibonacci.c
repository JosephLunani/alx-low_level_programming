#include <stdio.h>

/**
 * main - prints the even fibonacci less than 4,000, 000
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int fnum = 1, snum = 2;
	int thirdnum;
	int total;

	for (thirdnum = 3; thirdnum < 4000000; thirdnum++)
	{
		thirdnum = fnum + snum;
		fnum = snum;
		snum = thirdnum;

		if (thirdnum / 2 == 0)
		{
			total = total + thirdnum;
			printf("%d\n", total);
		}
	}
	return (0);
}
