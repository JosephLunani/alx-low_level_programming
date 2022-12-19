#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str:pointer char
 * Return:void
 */

void puts2(char *str)
{
	int i;
	char *str = p;

	while (*(p + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(p + i));
	}
	_putchar('\n');
}
