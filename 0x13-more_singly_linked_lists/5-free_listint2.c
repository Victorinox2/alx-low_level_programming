/*
 * File: 5-free_listint2.c
 * Auth: Victorinox2
 */

#include "lists.h"


/**
 * free_listint2 - Frees the linked list
 * @head: Pointer to listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
