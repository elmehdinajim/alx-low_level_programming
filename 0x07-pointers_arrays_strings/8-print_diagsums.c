#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - Entry pnt
 *@a: in
 *@size: in
 *Return 0: (Success)
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, y;

	add1 = 0;
	add2 = 0;

	for (y = 0; y < size; y++)
	{
		add1 = add1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		add2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", add1, add2);
}
