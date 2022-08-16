#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list
 * @head: The head of the linked list
 * @n: The value to add to the end of the linked list
 *
 * Return: The address of the new element, or NULL it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *new_node;

if (head == NULL)
	return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
	*head = new_node;
	return (new_node);
}

tmp = *head;

while (tmp->next)
	tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
	}

