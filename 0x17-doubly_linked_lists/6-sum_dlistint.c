#include "lists.h"

/**
 * sum_dlistint - return the sum of all data in list
 * @head: pointer to head
 *
 * Return: the integer sum of all the elements, 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
