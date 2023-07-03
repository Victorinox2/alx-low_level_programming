/*
 * File: 100-first.c
 * Auth: Victorinox2
 */

#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - Prints a sentence before executing the main function
 */
void first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}
