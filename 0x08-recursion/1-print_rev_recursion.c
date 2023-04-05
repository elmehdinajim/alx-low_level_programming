#include "main.h"

/**
 *_strlen_recursion - length string.
 *@s: In.
 *Return: length of s.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
