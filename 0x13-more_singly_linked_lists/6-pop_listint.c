/*
 * File: 6-pop_listint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * pop_listint - Deletes head node of a linked list
 * @head: Pointer to first element in the linked list
 *
 * Return: The data inside the elements that was deleted,
 * or 0 if the list is an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
