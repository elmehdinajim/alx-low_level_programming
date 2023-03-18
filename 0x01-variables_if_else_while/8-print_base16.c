#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a;

	for (a = 0 ; a < 16 ; a++)
	{
		if (a < 10)
		{
			putchar('0' + a);
		}
		else
		{
			putchar(87 + a);
		}
	}
	putchar('\n');
	return (0);
}
