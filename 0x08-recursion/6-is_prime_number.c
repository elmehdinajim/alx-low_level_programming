#include "main.h"

int actual_prime(int n, int i);

/**
 *is_prime_number - int prime or not
 *@n: number
 *
 *Return: 1 prime, 0 not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 *actual_prime - is it prime recursiv ?
 *@n: number
 *@i: iterator
 *
 *Return: 1 prime, 0 not prme
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
