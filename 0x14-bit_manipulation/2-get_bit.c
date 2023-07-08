/*
 * File: 2-get_bit.c
 * Auth: Victorinox2
 */

#include "main.h"

/**
 * get_bit - Returns value of a bit at an index in decimal number
 * @n: The number to be searched
 * @index: Index of the bit
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
