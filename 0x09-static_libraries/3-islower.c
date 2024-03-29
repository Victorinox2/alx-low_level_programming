#include "main.h"

/**
 * File: 3-islower.c
 * Author: Victor Uwaoma
 * _islower - Checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
