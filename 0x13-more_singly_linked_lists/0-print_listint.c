#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * points to start of list
 * 
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h != NULL)
	{
		while (h)
		{
			nodes += 1;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (nodes);
}
