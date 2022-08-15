#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free all nodes from a list, and set head to NULL
 * @head: Pointer to the pointer to the start of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}
	free(*head);
	head = 0;
}
