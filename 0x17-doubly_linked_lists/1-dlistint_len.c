#include "lists.h"

/**
 * dlistint_len - function to return number of elements
 * @h: pointer to head
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
