#include "lists.h"

/**
 *add_dnodeint_end - add node at the end of list
 *@head: pointer to current head node
 *@n: data to add to new node
 *
 *Return: address new node on success, otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr_node;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr_node = *head;

		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new;
		new->prev = curr_node;
		new->next = NULL;
	}
	return (new);
}
