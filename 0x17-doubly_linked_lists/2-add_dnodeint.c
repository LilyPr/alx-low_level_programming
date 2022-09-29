#include "lists.h"

/**
 * add_dnodeint - function to add node at the beginning of the list
 * @head: pointer to head
 * @n: value of the data to be stored in the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}
