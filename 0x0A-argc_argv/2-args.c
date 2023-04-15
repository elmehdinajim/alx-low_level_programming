#include <stdio.h>
#include "main.h"

/**
 *main - prints all args
 *@argc: nmbrs of args
 *@argv: array of args
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
