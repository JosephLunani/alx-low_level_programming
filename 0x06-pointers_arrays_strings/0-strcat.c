#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @src:string to be appended
 * @dest:string output
 * @n:length of src
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
