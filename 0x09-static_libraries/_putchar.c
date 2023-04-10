#include "main.h"
#include <unistd.h>

/**
 *_putchar - write c to stdout
 *@c: char to print
 *Return: 1 On success.
 *On error, -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
