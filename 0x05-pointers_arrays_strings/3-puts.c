#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to an int that's changed
*Return: void : correct
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
