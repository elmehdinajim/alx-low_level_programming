#include <stdio.h>
#include "main.h"

/**
 *main - name of the program
 *@argc: nmbr arg
 *@argv: array of arg
 *Return 0: Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
