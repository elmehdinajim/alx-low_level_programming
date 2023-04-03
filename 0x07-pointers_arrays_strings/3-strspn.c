#include "main.h"

/**
 *_strspn - Entry pnt
 *@s: in
 *@approve: in
 *Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *approve)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; approve[r]; r++)
		{
			if (*s == approve[r])
			{
				n++;
				break;
			}
			else if (approve[r + 1] == '\0')
				return (n);
		}

		s++;
	}

	return (n);
}
