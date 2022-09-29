#include "lists.h"

/**
 * get_dnodeint_at_index - gets a doubly linked list node at a
 * a given index
 * @head: pointer to head of DLL to look through
 * @index: index of node to find
 *
 * Return: pointer to node if found, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (!head)
		return (NULL);
	for (num = 0; num < index; num++)
	{
		if (head->next)
		head = head->next;
		else
			return (NULL);
	}
	return (head);

}
