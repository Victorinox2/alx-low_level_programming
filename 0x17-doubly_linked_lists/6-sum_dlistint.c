/*
 * File: 6-sum_dlistint.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * sum_dlistint - sum up all data of a dlistint_t list.
 * @head: the head of dlistint_t list.
 *
 * Return: sum of all data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
