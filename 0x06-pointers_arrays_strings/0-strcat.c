#include "main.h"

/**
 * _strcat - concatenates two strings
 * using at most n bytes from src
 * @src:string to be appended
 * @dest:string output
 * Return: a pointer to _strcat
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
