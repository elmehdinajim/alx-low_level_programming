#include "main.h"

/**
 *_strchr - Entry pnt
 *@s: in
 *@c: in
 *Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}

	return (0);
}
