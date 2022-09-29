#include "lists.h"
/**
  * insert_dnodeint_at_index - Insert a new node
  * @h: pointer to head the start of the list
  * @idx: Index of the list where the new node should be added
  * @n: Value to assign to new node
  * Return: Address of the new node, NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int connect = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	tmp = *h;
	while (tmp != NULL)
	{
		if ((connect + 1)  == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		connect++;
		tmp = tmp->next;
	}
	if ((connect + 1) ==  idx)
		return (add_dnodeint_end(h, n));

	free(new);
	return (NULL);
}
