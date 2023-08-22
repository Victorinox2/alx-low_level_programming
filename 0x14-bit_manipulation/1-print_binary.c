/*
 * File: 1-print_binary.c
 * Auth: Victorinox2
 */

#include "main.h"

/**
 * print_binary - Prints binary equivalent of a decimal number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}