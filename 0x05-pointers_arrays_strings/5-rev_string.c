#include "main.h"

/**
 * rev_string - reverse a string
 * @s:string
 * Return:void
 */

void rev_string(char *s)
{
	int i, j;
	char a[500];

	i = 0;
	j = 0;

	while (*(s + 1))
	{
		*(a + 1) = *(s + 1);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + 1) = *(a + j);
			j++;
		i++;
	}
}
