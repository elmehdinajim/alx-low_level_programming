#include "main.h"

/**
 *factorial - factorial of n
 *@n: facttorial n
 *
 *Return: fac of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n* factorial(n - 1));
}
