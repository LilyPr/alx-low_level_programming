#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete the first item in a list
 * @head: Pointer to the pointer to the start of the list
 *
 *  Return: The value stored in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}
	return (n);
}