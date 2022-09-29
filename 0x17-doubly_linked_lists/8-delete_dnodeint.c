#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index
 *@head: pointer to pointer to head
 *@index: position to delete
 *
 *Return: 1 on success, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *num;

	if (*head == NULL)
		return (-1);
	 num = *head;
	for (; index != 0; index--)
	{
		if (num == NULL)
			return (-1);
		num = num->next;
	}

	if (num == *head)
	{
		*head = num->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		num->prev->next = num->next;
		if (num->next != NULL)
			num->next->prev = num->prev;
	}

	free(num);
	return (1);
}
