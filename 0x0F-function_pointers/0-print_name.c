#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - print name with pointer to fct
 *@name: string to +
 *@f: pointer to fct
 *Return: NULL
 **/
void print_name(char *name, void(*f)(char*))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
