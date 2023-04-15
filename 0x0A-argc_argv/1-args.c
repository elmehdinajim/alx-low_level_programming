#include <stdio.h>
#include "main.h"

/**
 *main - print the number of arg passed
 *@argc: nmbr of arg
 *@argv: array of arguments
 *Return 0: Succes
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
