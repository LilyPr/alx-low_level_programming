#include "lists.h"

/**
 * *add_dnodeint_end - add node at the end of list
 * @head: pointer to current head node
 * @n: value to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *curre_node = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	curre_node = *head;
	if (curre_node == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (curre_node->next != NULL)
		curre_node = curre_node->next;
	new->prev = curre_node;
	curre_node->next = new;
	return (new);
}
