/*
 * File: 4-free_listint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * free_listint - Frees the linked list
 * @head: The listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
