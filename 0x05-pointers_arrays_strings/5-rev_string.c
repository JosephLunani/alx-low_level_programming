#include "main.h"

/**
 * rev_string - reverse a string
 * @s:string
 * Return:void
 */

void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		i--;
	}
}
