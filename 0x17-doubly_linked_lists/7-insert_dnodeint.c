#include "lists.h"
/**
  * insert_dnodeint_at_idx - Insert a new node
  * @head: pointer to head the start of the list
  * @idx: Index to insert new node
  * @n: Value to assign to new node
  * Return: Address of the new node, NULL if it fails
  */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	dlistint_t *new, *curr, *prev;

	curr = *head;
	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		prev = NULL;
		while (curr->prev != NULL)
			curr = curr->prev;
		for (num = 0; curr != NULL && num < idx; num++)
		{
			prev = curr;
			curr = curr->next;
		}
		if (num == idx)
		{
			new->n = n;
			new->prev = prev;
			if (curr != NULL)
				curr->prev = new_node;
			new->next = curr;
			if (idx != 0)
				prev->next = new;
			else
				*head = new;
			return (new);
		}
		return (NULL);
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (new);
}
