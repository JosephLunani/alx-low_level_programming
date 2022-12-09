#include <stdio.h>
#include <time.h>
#include<stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * mainn - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 1)
		printf("%d is a zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
