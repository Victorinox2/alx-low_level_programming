/*
 * File: 7-insert_dnodeint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node in dlistint_t
 *                            list at a given position.
 * @h: pointer to head of the dlistint_t list.
 * @idx: position to insert new node.
 * @n: integer for new node to contain.
 *
 * Return: NULL. If the function fails
 *         Otherwise - return the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
