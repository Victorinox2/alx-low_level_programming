/*
 * File: 4-free_dlistint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * free_dlistint - frees the linked dlistint_t list.
 * @head: head of dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
