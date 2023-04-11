#include "main.h"
#include <unistd.h>
/**
 * _putchar - c to stdout
 * @c: char
 * Return 1: succes.
 * Return 0: error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

