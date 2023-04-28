#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Contents of a list
 * @h: pointer of list
 * Return: how many elements in list
 */

size_t print_list(const list_t *h)
{
	size_t n_Node;

	if (!h)
		return (0);
	n_Node = 0;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n_Node++;
	}  while (h);

	return (n_Node);
}
