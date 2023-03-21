#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int a,b;

for ( a = 0 ; a <=99 ; a++)
{	

	for (b = 0 ; b <= 99 ; b++)
	{
        if (a<j && i != b)
        {
            putchar((a/10)+'0');
            putchar((i%10)+'0');
            putchar(' ');
            putchar((a/10)+'0');
            putchar((b%10)+'0');
            if (i != 98 || b != 99)
            {
                putchar(',');
                putchar(' '); 
            }
          }
	}
}
	putchar('\n');
	return (0);
}
