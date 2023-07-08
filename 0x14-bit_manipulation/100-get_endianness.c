/*
 * File: 100-get_endianness.c
 * Auth: Victorinox2
 */

#include "main.h"

/**
 * get_endianness - Checks if the machine is little or big endian
 * Return: 0 if big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
