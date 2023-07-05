/*
 * File: 7-get_nodeint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at a certain index in a linked list
 * @head: First node in linked list
 * @index: The index of the node to be returned
 *
 * Return: Pointer to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
