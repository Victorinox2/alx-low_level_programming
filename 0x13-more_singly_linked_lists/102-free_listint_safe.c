/*
 * File: 102-free_listint_safe.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * free_listint_safe - Frees linked list
 * @h: Pointer to first node in linked list
 *
 * Return: Number of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
