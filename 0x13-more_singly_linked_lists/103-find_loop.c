/*
 * File: 103-find_loop.c
 * Auth: Victorinox2
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop in linked list
 * @head: Linked list to be searched for
 *
 * Return: Address of node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
