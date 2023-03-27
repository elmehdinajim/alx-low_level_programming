#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 *@a: A pointer to an int that is going to be updated
 *@b: B pointer to an int that is also going to be updated
 * Return: void : correct
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
