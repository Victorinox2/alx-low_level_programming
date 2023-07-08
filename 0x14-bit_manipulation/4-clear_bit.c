/*
 * File: 4-clear_bit.c
 * Auth: Victorinox2
 */

#include "main.h"

/**
 * clear_bit - Sets value of a given bit to 0
 * @n: Pointer to the number to be changed
 * @index: Index of bit to be cleared
 *
 * Return: 1 for the success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
