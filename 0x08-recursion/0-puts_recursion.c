/*
 * File: 0-puts_recursion.c
 * Auth: Victor Uwaoma
 */

#include "main.h"

/**
 * _puts_recursion - Prints a string that will be followed by a new line.
 * @s: String to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
