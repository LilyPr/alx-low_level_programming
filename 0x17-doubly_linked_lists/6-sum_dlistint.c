#include "lists.h"

/**
 *sum_dlistint - return the sum of all data in list
 *@head: pointer to head
 *
 *Return: sum of all data in success, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
