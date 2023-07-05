/*
 * File: 1-listint_len.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked lists
 * @h: Linked list of the type listint_t to traverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
