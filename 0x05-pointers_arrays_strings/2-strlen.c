#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s:pointer to string
 * Return: int
 */

int _strlen(char *s)
{
	int counter;
	
	for (counter = 0; s[counter] != '\0'; counter++);
	return (counter);
}
