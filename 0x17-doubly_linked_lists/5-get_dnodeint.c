/*
 * File: 5-get_dnodeint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * get_dnodeint_at_index - locates node in the dlistint_t list.
 * @head: head of dlistint_t list.
 * @index: The node to be located.
 *
 * Return: NULL. If the node does not exist
 *         Otherwise - return address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
