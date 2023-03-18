#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a;
	int i = 0;

	for (a = 0 ; a < 100 ; a++)
	{
		putchar(a / 10 + '0');
		putchar(i + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(32);
		}
		i++;
		if (i > 9)
		{
			i = 0;
		}
	}
	putchar('\n');
	return (0);
}
