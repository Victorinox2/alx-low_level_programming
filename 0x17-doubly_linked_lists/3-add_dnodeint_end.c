/*
 * File: 3-add_dnodeint_end.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of dlistint_t list.
 * @head: a pointer to the head of dlistint_t list.
 * @n: integer for new node to contain.
 *
 * Return: NULL. If the function fails
 *         Otherwise - return the address of new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
