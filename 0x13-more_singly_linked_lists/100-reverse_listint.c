/*
 * File: 100-reverse_listint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * reverse_listint - Reverses linked list
 * @head: Pointer first node in the list
 *
 * Return: Pointer to the first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
