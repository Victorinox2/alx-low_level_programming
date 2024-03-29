/*
 * File: 3-set_bit.c
 * Auth: Victorinox2
 */

#include "main.h"

/**
 * set_bit - Sets a bit at given index to 1
 * @n: Pointer to the number to be changed
 * @index: Index of the bit to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
