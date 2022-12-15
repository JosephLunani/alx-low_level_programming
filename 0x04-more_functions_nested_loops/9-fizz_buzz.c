#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz for 3 and buzz for 5 multiples
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 15 == 0)
			printf("FizzBuzz");
		printf("%d", i);
	}
	printf('\n');
	return (0);
}
