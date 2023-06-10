#include "main.h"

/**
 * File: 6-abs.c
 * Author: Victor Uwaoma
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
