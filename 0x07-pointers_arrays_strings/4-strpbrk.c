#include "main.h"

/**
 *_strpbrk - Entry pnt
 *@s: in
 *@approve: in
 *Return: 0 (Success)
 */
char *_strpbrk(char *s, char *approve)
{
	int k;

	while (*s)
	{
		for (k = 0; approve[k]; k++)
		{
			if (*s == approve[k])
				return (s);
		}

		s++;
	}

	return ('\0');
}
