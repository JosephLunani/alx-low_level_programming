#include "main.h"
#include <unistd.h>
/* _putchar - writes a character to the stdout
 * @c: to be printed character
 * Return: On success 1
 * on Error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
