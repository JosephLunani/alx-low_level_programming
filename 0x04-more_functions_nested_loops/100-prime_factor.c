#include <stdio.h>
#include <math.h>

/**
 *  main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	long int i;
	long int j;
	long int isPrime;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			isPrime = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}
			if (isPrime == 1)
			{
				printf("%d, ", i);
			}
		}
	}
	return (0);
}
