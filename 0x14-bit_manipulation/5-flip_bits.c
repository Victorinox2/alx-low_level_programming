/*
 * File: 5-flip_bits.c
 * Auth: Victorinox2
 */

#include "main.h"

/**
 * flip_bits - Counts the number of the bits to be changed
 * To get from one number to the other
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
