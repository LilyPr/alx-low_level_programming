#include "lists.h"

/**
 *dlistint_len - function to return number of elements
 *@h: pointer to head
 *
 *Return: lenght of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
