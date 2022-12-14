#include <stdio.h>

/**
 * main - prints the sum of the multiples of 3 and 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int limit = 0;
	int sum = 0;

	for (limit = 0; limit < 1024; limit++)
	{
		if (limit % 3 == 0 || limit % 5 == 0)
		{
			sum = sum + limit;
		}
	}
printf("%d\n", sum);

return (0);
}


